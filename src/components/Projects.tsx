import { useState } from 'react';
import type { Project } from '../data/projects';
import { useColumnCount } from '../hooks/useColumnCount';
import { useLang } from '../i18n/useLang';
import { ProjectCard } from './ProjectCard';
import { ProjectDetail } from './ProjectDetail';
import { SectionTitle } from './SectionTitle';

export const Projects = () => {
  const { profile, projects, ui } = useLang();
  const columnCount = useColumnCount();
  const [selected, setSelected] = useState<Project | null>(null);

  const columns = Array.from({ length: columnCount }, (_, column) =>
    projects.filter((_, index) => index % columnCount === column),
  );

  return (
    <section
      className="projects-section"
      id="proyectos"
      aria-labelledby="projects-title"
    >
      <div className="projects-shell">
        <div className="projects-heading">
          <SectionTitle
            first="ML"
            id="projects-title"
            number="02"
            second="PROJECTS"
            secondStyle="serif"
          />
          <p>{profile.projects.summary}</p>
        </div>

        <div className="projects-stage">
          <div
            className="projects-grid"
            role="list"
            aria-label={ui.projectsList}
          >
            {columns.map((column, columnIndex) => (
              <div className="projects-column" key={columnIndex}>
                {column.map((project) => (
                  <div role="listitem" key={project.slug}>
                    <ProjectCard
                      project={project}
                      number={projects.indexOf(project) + 1}
                      onOpen={setSelected}
                    />
                  </div>
                ))}
              </div>
            ))}
          </div>
        </div>
      </div>

      <ProjectDetail
        project={selected}
        number={
          selected
            ? projects.findIndex((item) => item.slug === selected.slug) + 1
            : 0
        }
        onClose={() => setSelected(null)}
      />
    </section>
  );
};
