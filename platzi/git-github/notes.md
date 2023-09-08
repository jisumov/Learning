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

# Clase 7 - Analizar cambios en los archivos de tu proyecto con Git

## Terminal

- Mostrar commit detalladamente → `git show [commit]`
- Crear commit sin mensaje → `git commit`
- Salir de vim en MINGW64 → `ESC + Shift + ZZ`
- Agregar comentario → `#<text>`
- Mostrar cambios entre commits → `git diff [old-commit-ID] [new-commit-ID]`

# Clase 8 - ¿Qué es el staging?

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

# Clase 9 - ¿Qué es branch (rama) y cómo funciona un Merge en Git?

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

# Clase 13 - Introducción a las ramas o branches de Git

## Conceptos

- El commit más reciente es el HEAD.
- Al crear una rama se copia el main.
- HEAD es un indicador de la rama actual.

## Terminal

- Agregar archivo y crear commit con mensaje → `git commit -am "<message>"`
- Crear rama → `git branch <branch-name>`
- Cambiar rama → `git checkout <branch-name>`

# Clase 14 - Fusión de ramas con Git merge

## Terminal

- Mostrar ramas → `git branch`
- Fusionar ramas → `git merge <branch-name>`

# Clase 15 - Resolución de conflictos al hacer un merge

## Terminal

- Fusionar ramas → `git merge <branch-name>`

## VSCode

- Accept Current Change | Accept Incoming Change | Accept Both Changes | Compare Changes.

## Sintaxis

```html
<<<<<<< HEAD
                Hyperblog <span id="tagline">Main Blog</span>
=======
                Hyperblog <span id="tagline">The blog header</span>
>>>>>>> development
```

# Clase 16 - Cómo funcionan las llaves públicas y privadas

## Conceptos

- Cifrado asimétrico: técnica de cifrado compuesta por llaves públicas y privadas.
- Llave pública: cifra el mensaje y la sabe todo el mundo.
- Llave privada: descifra el mensaje y la sabe su dueño.
- Las llaves están vinculadas matemáticamente, es decir, lo que se cifre con la llave pública, lo descifra la llave privada.

## Cifrado asimétrico

![Thakkar, J. (2020). *Types of Encryption: What to Know About Symmetric vs Asymmetric Encryption*.](https://sectigostore.com/blog/wp-content/uploads/2020/04/types-of-encryption-asymmetric-encryption.png)

Thakkar, J. (2020). *Types of Encryption: What to Know About Symmetric vs Asymmetric Encryption*.

# Clase 17 - Configura tus llaves SSH en local

## Concepto

- Secure Shell (SSH): protocolo seguro de acceso remoto y transferencia de archivos.

## Terminal

- Generar llave SSH → `ssh-keygen -t rsa -b 4096 -C "<email@domain.com>"`
- Crear passphrase.
- Inicializar agente SSH → `eval "$(ssh-agent -s)"`
- Agregar llave al agente SSH → `ssh-add ~/.ssh/id_rsa`
- Mostrar llave SSH → `cat ~/.ssh/id_rsa.pub`

# Clase 18 - Uso de GitHub

## Conceptos

- Es una plataforma web que guarda repositorios Git.
- Raw: archivo sin procesar.
- Blame: autor de cada cambio.
- History: historial del archivo.

## GitHub

- Your repositories → New → Repository name → Add README file → Create repository.
- Settings → Access → SSH and GPG keys → New SSH key.
- Pegar toda la llave SSH.

# Clase 19 - Tu primer push

## Recomendación

- Primero hacer un pull antes de un push.

## Terminal

- Agregar repositorio → `git remote add origin <git@github.com:username/Repository.git>`
- Verificar referencias → `git remote -v`
- Subir cambios → `git push origin main`
- Renombrar rama actual → `git branch -m <branch-name>`
- Descargar cambios → `git pull origin main`
- Descargar cambios con historial no relacionado → `git pull origin main --allow-unrelated-histories`

# Clase 20 - Git tag y versiones en Github

## Terminal

- Mostrar historial de commits gráficamente → `git log [path] --graph`
- Mostrar historial de commits gráfica y brevemente → `git log [path] --graph --decorate --oneline`
- Crear alias → `alias <shortcut>="<command-to-execute>"`
- Crear tag → `git tag -a <tag-name> -m "<message>"`
- Mostrar tags → `git tag`
- Mostrar referencias → `git show-ref --tags`
- Subir tags → `git push origin --tags`
- Eliminar tag en local → `git tag -d <tag-name>`
- Eliminar tag en remoto → `git push origin :refs/tags/<tag-name>`

# Clase 21 - Manejo de ramas en GitHub

## Terminal

- Mostrar ramas y sus commits → `git show-branch`
- Abrir GUI de Git → `gitk`
- Subir rama → `git push origin <branch-name>`

# Clase 22 - Configurar múltiples colaboradores en un repositorio de GitHub

## Concepto

- Clonar no es lo mismo que colaborar.

## Paso a paso

- Settings → Collaborators → Add people.

# Clase 23 - Flujo de trabajo profesional: Haciendo merge de ramas de desarrollo a master

## Conceptos

- No es recomendable subir archivos binarios, tales como imágenes.
- Forzar actualización → `Ctrl + Shift + R`

## Terminal

- `git status` → `git pull origin <branch-name>` → `git checkout <branch-name>` → `git add <path>` → `git commit -m "<message>"` → `git push origin <branch-name>` → `git merge <branch-name>`

# Clase 24 - Flujo de trabajo profesional con Pull requests

## Conceptos

- Production Server: donde se aloja la versión final del proyecto.
- Staging Server: donde se alojan las versiones de prueba.
- Pull request: estado intermedio antes de enviar el merge, en el que se aprueban o no los cambios.
- DevOps: administrador del entorno de desarrollo.

# Clase 25 - Utilizando Pull Requests en GitHub

## Paso a paso

- Seleccionar la rama a fusionar → New pull request → base: main → compare: <branch-name> → `git commit -am "<message>"` → `git push origin <branch-name>` → Compare & pull request → Agregar detalles → [Reviewers] → Create pull request.
- Pull request → Commits → Files changed → Review changes → Agregar detalles → Request changes → Submit review.
- `git pull origin <branch-name>` → `git commit -am "<message>"` → `git push origin <branch-name>` → Agregar detalles → Comment.
- View changes → Agregar detalles → Approve → Submit review.
- Merge pull request → Confirm merge → [Delete branch].
- `git pull origin <branch-name>`

# Clase 26 - Creando un Fork, contribuyendo a un repositorio

## Concepto

- Fork o Bifurcación toma una copia del estado actual del proyecto y la clona.

## Paso a paso

- Settings → Collaborators → Remove <username> as a collaborator.
- Watch → Star → Fork.
- Clone or download → Copiar URL → `git clone <hostname>` → `git commit -am "<message>"` → `git push`
- New pull request → base repository: <repository-1> → base: <branch-name> → head repository: <repository-2> → compare: <branch-name> → Create pull request → Agregar detalles → [Allow edits from maintainers] → Create pull request.
- Pull request → Commits → Files changed → Review changes → Agregar detalles → Approve → Submit review.
- Merge pull request → Confirm merge → [Delete branch].
- `git pull origin <branch-name>`
- Compare → Switching the base.
- Copiar URL → `git remote add upstream <hostname>` → `git pull upstream main` → `git commit -am "<message>"` → `git push origin main`

# Clase 27 - Haciendo deployment a un servidor

## Concepto

- Algunos equipos de desarrollo ponen tags a las ramas que se envían a producción.

## Terminal

- Cambiar a directorio del servidor → `cd /var/www/<domain.com>/html`
- Copiar URL → `git clone <hostname>`
- Descargar cambios → `git pull origin main`

## CI/CD

- Continuous Integration/Continuous Delivery es un método de desarrollo de software que automatiza la creación, las pruebas y la implantación de cambios en el código, facilitando una entrega rápida y fiable del proyecto.
- Servidores:
    - Travis CI.
    - Jenkins.