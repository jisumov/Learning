# Curso Profesional de Git y GitHub

# Clase 1 - ¿Por qué usar un sistema de control de versiones como Git?

## Ventajas

- Guardar el historial de cambios.
- Colaborar de manera más fácil.
- Organizar el flujo de trabajo.
- Mantener código.

## Terminal

- Inicializar repositorio → `git init`
- Agregar archivo → `git add <path>`
- Crear commit → `git commit -m "<message>"`
- Verificar estado → `git status`
- Mostrar commit detalladamente → `git show [commit]`
- Mostrar historial de commits → `git log [path]`

# Clase 2 - ¿Qué es Git?

## Concepto

- Es un sistema de control de versiones distribuido, diseñado por Linus Torvalds, que garantiza la eficiencia y confiabilidad de aplicaciones con un gran código fuente.

## Ventajas

- Registrar cambios de forma incremental.
- Facilita el flujo del proyecto.
- Identifica autores.

## Alcance

- Archivos de texto plano.
- No recomendable para archivos binarios.

## Características

- Control de versiones: historial de archivos.
- Ramificación: código fraccionado.
- Colaboración: trabajo en equipo.
- Seguridad: estados de archivos.
- Flexibilidad: casi todo es local.
- Comandos: sintaxis sencilla.

## GitHub

- Plataforma para alojar proyectos con Git.
- Permite compartir y reducir errores.
- Potencia el trabajo colaborativo.

# Clase 3 - Instalando GitBash en Windows

## Paso a paso

- [https://git-scm.com/download/win](https://git-scm.com/download/win)
- Habilitar `Check daily for Git for Windows updates`
- Habilitar `Override the default branch name for new repositories`
- Habilitar `Enable symbolic links`

# Clase 4 - Editores de código, archivos binarios y de texto plano

## Conceptos

- Archivo de texto plano: tal cual como se ve.
- Archivo binario: estructurada de 0s y 1s.

## Configuración

- Abrir explorador de archivos.
- View → Show → File name extensions.

## Editores de código

- Atom.
- Sublime Text.
- Visual Studio Code.

## Paso a paso

- [https://code.visualstudio.com](https://code.visualstudio.com/)
- Habilitar `Add “Open with Code” action to Windows Explorer file context menu`
- Habilitar `Add “Open with Code” action to Windows Explorer directory context menu`

# Clase 5 - Introducción a la terminal y línea de comandos

## Característica

- Windows no es case-sensitive.

## Terminal

- Mostrar directorio → `pwd`
- Cambiar directorio → `cd [path]`
- Listar archivos → `ls`
- Listar detalladamente → `ls -l`
- Listar archivos ocultos → `ls -a [-l]`
- Limpiar terminal → `clear` ↔ `Ctrl + L`
- Cambiar a directorio anterior → `cd ..`
- Cambiar a directorio actual → `cd .`
- Cambiar a directorio principal → `cd`
- Autocompletar → `tab`
- Crear directorio → `mkdir <foldername>`
- Crear archivo → `touch <filename>`
- Concatenar stdout → `cat <filename>`
- Mostrar historial de comandos → `history`
- Repetir comando → `!<number-of-command>`
- Eliminar archivo sin validación → `rm <filename>`
- Mostrar ayuda → `help <command-name>` ↔ `<command-name> --help`

# Clase 6 - Crea un repositorio de Git y haz tu primer commit

## Terminal

- Inicializar repositorio → `git init`
- Abrir Visual Studio Code → `code <path>`
- Verificar estado → `git status`
- Agregar archivo → `git add <path>`
- Remover archivo → `git rm --cached <path>`
- Crear commit → `git commit -m "<message>"`
- Mostrar configuración de git → `git config --list`
- Localizar configuración de git → `git config --list --show-origin`
- Configurar nombre de usuario → `git config --global user.name "<username>"`
- Configurar correo de usuario → `git config --global user.email "<email@domain.com>"`
- Mostrar historial de commits → `git log [path]`