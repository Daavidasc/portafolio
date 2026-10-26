# Reconstruye el juego para la web (public/play/karate-panamericano/karate.js + karate.wasm).
#
# Requisitos: Python 3, Emscripten (emsdk) y que `emsdk_env.ps1` esté cargado, o pasar -Emsdk con su carpeta.
#   .\build.ps1 -Emsdk C:\ruta\a\emsdk
param([string]$Emsdk = $env:EMSDK)

$ErrorActionPreference = 'Stop'
$aqui = $PSScriptRoot
$salida = Join-Path $aqui '..\..\..\public\play\karate-panamericano'

if ($Emsdk) {
  # emsdk_env.ps1 escribe avisos en stderr; no son errores.
  $ErrorActionPreference = 'Continue'
  & (Join-Path $Emsdk 'emsdk_env.ps1') *> $null
  $ErrorActionPreference = 'Stop'
}

if (-not (Get-Command em++ -ErrorAction SilentlyContinue)) {
  throw 'No se encuentra em++. Instala Emscripten (emsdk) o pasa -Emsdk.'
}

# 1. Regenera main_web.cpp desde ../karate.cpp (el original no se modifica).
python (Join-Path $aqui 'portar.py')

# 2. Compila a WebAssembly (los avisos del compilador van a stderr y no deben detener el script).
$ErrorActionPreference = 'Continue'
em++ (Join-Path $aqui 'main_web.cpp') -O2 -std=c++17 `
  -Wno-pointer-bool-conversion `
  -sASYNCIFY -sEXIT_RUNTIME=1 -sALLOW_MEMORY_GROWTH=1 `
  -sMODULARIZE=1 -sEXPORT_NAME=createKarate -sENVIRONMENT=web `
  -o (Join-Path $salida 'karate.js')

if ($LASTEXITCODE -ne 0) { throw 'Fallo la compilacion.' }
Write-Host "Listo: $salida\karate.js y karate.wasm"
