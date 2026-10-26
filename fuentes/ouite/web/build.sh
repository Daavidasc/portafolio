#!/usr/bin/env bash
# Igual que build.ps1, para Linux/macOS/Git Bash. Requiere `source /ruta/a/emsdk/emsdk_env.sh` antes.
set -euo pipefail
cd "$(dirname "$0")"
OUT=../../../public/play/ouite

python3 portar.py
em++ main_web.cpp -O2 -std=c++17 -Wno-pointer-bool-conversion \
  -sASYNCIFY -sEXIT_RUNTIME=1 -sALLOW_MEMORY_GROWTH=1 \
  -sMODULARIZE=1 -sEXPORT_NAME=createOuite -sENVIRONMENT=web \
  -o "$OUT/ouite.js"
