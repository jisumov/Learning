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
- Crear commit con mensaje → `git commit -m "<message>"`
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

# Clase 7 - ****Analizar cambios en los archivos de tu proyecto con Git****

## Terminal

- Mostrar commit detalladamente → `git show [commit]`
- Crear commit sin mensaje → `git commit`
- Salir de vim en MINGW64 → `ESC + Shift + ZZ`
- Agregar comentario → `#<text>`
- Mostrar cambios entre commits → `git diff [old-commit-ID] [new-commit-ID]`

# Clase 8 - ****¿Qué es el staging?****

## Conceptos

- Staging: área que prepara los cambios y utiliza memoria RAM.
- Repositorio: área que almacena los cambios en `.git/`
- Untracked: archivo sin rastrear.
- Tracked: archivo rastreado.

## Paso a paso

- `git init` → Crea el staging y el repositorio local.
- `git add <path>` → El archivo pasa al staging.
- `git commit -m "<message>"` → El archivo pasa al repositorio local.
- `git checkout` → Restaura archivos del árbol de trabajo.

# Clase 9 - ****¿Qué es branch (rama) y cómo funciona un Merge en Git?****

## Conceptos

- Rama: línea de desarrollo del proyecto.
- Rama de experimentos: development.
- Rama de bugs: hotfix.
- Merge: fusionar ramas.
- Conflicto: se rompen archivos.

# Clase 10 - Volver en el tiempo en nuestro repositorio utilizando reset y checkout

## Terminal

- Volver a una versión anterior y eliminar los archivos tanto del staging como del disco duro → `git reset <old-commit-ID> --hard`
- Volver a una versión anterior y conservar los archivos del staging → `git reset <old-commit-ID> --soft`
- Mostrar cambios entre staging y disco duro → `git diff`
- Mostrar historial de commits a detalle → `git log [path] --stat`
- Salir de vista → `q`
- Ir a versión anterior de un archivo → `git checkout <old-commit-ID> <filename>`
- Volver a versión actual de un archivo → `git checkout main <filename>`

# Clase 11 - Git reset vs. Git rm

## Comandos

- `git reset --soft` → Mueve el puntero de la rama y HEAD, manteniendo los cambios en el staging.
- `git reset --mixed` → Mueve el puntero de la rama y HEAD, deshaciendo los cambios en el staging y conservándolos en el disco duro.
- `git reset --hard` → Mueve el puntero de la rama y HEAD, descartando todos los cambios tanto del staging como del disco duro.
- `git reset HEAD` → Mantiene el puntero de la rama y HEAD, deshaciendo los cambios en el staging.
- `git rm --cached` → Elimina los archivos del staging, conservándolos en el disco duro.
- `git rm --force` → Elimina forzosamente los archivos tanto del staging como del disco duro.
- `git revert` → Crea un nuevo commit que deshace los cambios y preserva el historial.

## Diferencias

![Platzi. (2020). *Git reset vs. Git rm*.](https://static.platzi.com/media/user_upload/git-reset%20%281%29-77a1294a-fb8b-43d0-aace-a517c1a05c2e.jpg)

Platzi. (2020). *Git reset vs. Git rm*.

# Clase 12 - Flujo de trabajo básico con un repositorio remoto

## Comandos

- `git clone <hostname>` → Clona el repositorio remoto.
- `git push` → Envía los cambios del repositorio local al remoto.
- `git fetch` → Actualiza los cambios del repositorio remoto al local.
- `git merge` → Fusiona los cambios del repositorio remoto al local.
- `git pull` → Utiliza fetch y merge.