# Curso de Configuración de Entorno de Desarrollo en Windows

# Clase 1 - Descargar e instalar un navegador web: Chrome

## ¿Qué es el navegador?

- Es el software que nos sirve para visualizar sitios web.
- Se conectan a un servidor, a través de una petición de HTTP o HTTPS (Hypertext Transfer Protocol).
- Se renderizan de manera estándar gracias a HTML, CSS y Javascript.

## Versiones de Google Chrome

- Canary: experimental.
- Dev: características próximas a lanzarse entre 9 y 12 semanas.
- Stable: tradicional.

# Clase 2 - Manejo básico de las DevTools

## Herramientas para desarrolladores

- [https://chrome.google.com/webstore/category/ext/11-web-development](https://chrome.google.com/webstore/category/ext/11-web-development)
- Lighthouse: calidad de páginas web.
- Inspeccionar → `Ctrl + Shift + I`

# Clase 3 - **Instalar VSCode**

## ¿Qué es?

- [https://code.visualstudio.com](https://code.visualstudio.com/)
- Editor de código de Microsoft.
- IntelliSense: autocompletado.
- Descargas → `Ctrl + J`

## Instalación

- Habilitar `Add “Open with Code” action to Windows Explorer file context menu`
- Habilitar `Add “Open with Code” action to Windows Explorer directory context menu`

# Clase 4 - Extensiones de VSCode

## Marketplace

- Live Server.
- Highlight Matching Tag.
- ESLint.
- CSS Peek.
- Code Spell Checker.
- WSL.
- Node Require.
- Material Icon Theme.

## Comandos

- Mostrar todos → `Ctrl + Shift + P`
- Habilitar íconos → `Material Icons: Activate Icon Theme`

# Clase 5 - ¿Qué es WSL?

## Concepto

- Windows Subsystem for Linux 2 (WSL 2) nos permite ejecutar la terminal de Linux en Windows.

# Clase 6 - Configurar Windows 11 para soportar la instalación de WSL

## Paso a paso

- Abrir Terminal.
- Instalar WSL → `wsl --install`
- Habilitar Máquina Virtual → `dism.exe /online /enable-feature /featurename:VirtualMachinePlatform /all /norestart`
- Turn Windows features on or off.
- Habilitar Windows Subsystem for Linux.

# Clase 7 - Ubuntu en WSL

## Configuración

- Crear nombre de usuario UNIX.
- Crear contraseña segura.
- Habilitar perfil predeterminado Ubuntu.

# Clase 8 - Instalación de VirtualBox

## Virtualización

- Permite definir una computadora como host y establecer varios equipos guest.
- Un host puede disponer de muchos recursos para su posterior distribución.
- Más fácil de mantener.

## Instalación

- [https://www.virtualbox.org/wiki/Downloads](https://www.virtualbox.org/wiki/Downloads)
- [https://ubuntu.com/download/desktop](https://ubuntu.com/download/desktop)
- Descargar versión LTS.
- New → ISO Image → Guest.
- 4 GB de RAM, 2 CPUs y 25 GB de almacenamiento.
- Pre-allocate Full Size.

# Clase 9 - Instalación de Ubuntu en VirtualBox

## Configuración

- Conectar cuentas.
- Habilitar Livepatch.
- Enviar información del sistema.
- Deshabilitar servicios de ubicación.

## Ubuntu Software

- Visual Studio Code.

# Clase 10 - Comandos básicos de la terminal

## Lista

- Mostrar directorio → `pwd`
- Cambiar directorio → `cd <path>`
- Limpiar terminal → `clear`
- Resetear terminal → `reset`
- Crear directorio → `mkdir <foldername>`
- Crear archivo → `touch <filename>`
- Abrir Visual Studio Code → `code <path>`

## Index

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
</body>
</html>
```

# Clase 11 - Instalación de Node

## Terminal

- Buscar paquetes → `sudo apt update`
- Actualizar paquetes → `sudo apt upgrade`
- Instalar Node → `sudo apt install nodejs`
- Mostrar versión de Node → `node -v`
- Instalar npm → `sudo apt install npm`
- Instalar herramienta de actualización Node → `sudo npm install -g n`
- Actualizar Node → `sudo n latest`

# Clase 12 - **Instalación de Python**

## Terminal

- Instalar herramienta de scripts para PPAs (Personal Package Archive) → `sudo apt install software-properties-common`
- Agregar PPA → `sudo add-apt-repository ppa:deadsnakes/ppa`
- Instalar Python → `sudo apt install python3.11`
- Mostrar versión de Python → `python3 --version`

# Clase 13 - **Instalando Git**

## Terminal

- Instalar Git → `sudo apt-get install git-all`
- Mostrar versión de Git → `git version`

# Clase 14 - **Vincular la llave SSH**

## **Concepto**

- La llave SSH nos permite iniciar sesión en GitHub y realizar cambios de forma segura.

## Terminal

- Generar llave SSH → `ssh-keygen -t ed25519 -C <email@domain.com>`
- Crear passphrase.
- Inicializar agente SSH → `eval "$(ssh-agent -s)"`
- Agregar llave al agente SSH → `ssh-add ~/.ssh/id_ed25519`
- Mostrar llave SSH → `cat ~/.ssh/id_ed25519.pub`

## **GitHub**

- Settings → Access → SSH and GPG keys → New SSH key
- Pegar toda la llave SSH.

# Clase 15 - Subir tu primer repo

## Terminal

- Inicializar repositorio → `git init`
- Verificar estado → `git status`
- Agregar archivo → `git add`
- Configurar nombre de usuario → `git config --global user.name "<username>"`
- Configurar correo de usuario → `git config --global user.email "<email@domain.com>"`
- Crear commit → `git commit -m "<message>"`

## **GitHub**

- Your repositories → New → Repository name → Add README file → Create repository
- Copiar enlace SSH.

## Terminal

- Agregar repositorio → `git remote add origin <git@github.com:username/Repository.git>`
- Verificar referencias → `git remote -v`
- Subir cambios → `git push origin main`

# Clase 16 - Power toys

## ¿Qué es?

- [https://learn.microsoft.com/en-us/windows/powertoys](https://learn.microsoft.com/en-us/windows/powertoys/)
- Herramientas para customizar Windows.
- FancyZones: diseños de ventanas.