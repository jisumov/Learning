# Curso de Introducción a la Terminal y Línea de Comandos

# Clase 1 - ¿Qué es la terminal?

## Ventajas

- Ejecutar grandes operaciones.
- Agilizar variedad de procesos.
- Configurar todo a la medida.
- Invocar demonios.

## Conceptos

- Terminal: interfaz gráfica que aloja a la shell.
- Shell: línea de comandos que se comunica con el sistema operativo.
- Comando: programa que puede recibir parámetros y opciones.

## Tipos de Shells

- Bourne Shell.
- Bash Shell.
- Z Shell.
- C Shell.
- Korn Shell.
- Fish Shell.
- PowerShell.

# Clase 2 - Aprendiendo a caminar en la terminal

## Sistema de archivos

![Platzi. (2021). *Aprendiendo a caminar en la terminal*.](https://static.platzi.com/media/articlases/Images/image%2860%29.png)

Platzi. (2021). *Aprendiendo a caminar en la terminal*.

## Terminal

- Listar archivos → `ls`
- Cambiar directorio → `cd route/`
- Limpiar terminal → `clear` ↔ `Ctrl + L`
- Listar detalladamente → `ls -l`
- Mostrar vista humana → `ls -lh`
- Mostrar directorio → `pwd`
- Describir archivo → `file name`

# Clase 3 - Manipulando archivos y directorios

## Terminal

- Listar archivos ocultos → `ls -la`
- Listar por tamaño en orden descendente → `ls -lS`
- Listar por nombre en orden descendente → `ls -lr`
- Mostrar vista de árbol → `tree`
- Mostrar nivel de árbol → `tree -L number`
- Crear directorio → `mkdir name`
- Crear archivo → `touch name`
- Copiar archivo → `cp name-from name-to`
- Mover archivo → `mv name route/`
- Renombrar archivo → `mv name-old name-new`
- Eliminar archivo sin validación → `rm name`
- Eliminar archivo con validación → `rm -i name`
- Eliminar recursivamente → `rm -r name`

# Clase 4 - Explorando el contenido de nuestros archivos

## Terminal

- Mostrar cabeza de archivo → `head name`
- Mostrar primeras n líneas → `head name -n number`
- Mostrar cola de archivo → `tail name`
- Mostrar últimas n líneas → `tail name -n number`
- Mostrar archivo → `less name`
- Buscar texto → `/text`
- Salir de vista → `q`
- Abrir archivo → `xdg-open name` ↔ `wslview name`
- Detener proceso → `Ctrl + C`
- Abrir sistema de archivos → `nautilus route/`

# Clase 5 - ****¿Qué es un comando?****

## Clases

- Es un programa ejecutable.
- Es un comando de utilidad de la shell, es decir, viene por defecto.
- Es una función de shell, es decir, viene de afuera.
- Es un alias, es decir, abrevia un comando.

## Terminal

- Mostrar clase de comando → `type command`
- Crear alias → `alias abbreviation="command"`
- Mostrar ayuda → `help command` ↔ `command --help`
- Mostrar manual → `man command`
- Mostrar información → `info command`
- Mostrar descripción → `whatis command`

# Clase 6 - ****Wildcards****

## Concepto

- Serie de caracteres especiales para búsquedas avanzadas.

## Terminal

- Filtrar todos los archivos con determinada extensión → `ls *.extension`
- Filtrar todos los archivos con determinado texto al comienzo → `ls text*`
- Limitar a 1 caracter después de determinado texto al comienzo → `ls text?`
- Limitar a 3 caracteres después de determinado texto al comienzo → `ls text???`
- Filtrar todos los archivos y directorios con alguna mayúscula al comienzo → `ls [[:upper:]]*`
- Filtrar únicamente los directorios con alguna mayúscula al comienzo → `ls -d [[:upper:]]*`
- Filtrar todos los archivos y directorios con alguna minúscula al comienzo → `ls [[:lower:]]*`
- Filtrar todos los archivos con determinados caracteres al comienzo → `ls [characters]*`

# Clase 7 - Redirecciones: cómo funciona la shell

## File descriptors

- Entrada: stdin y tiene el código 0.
- Salida: stdout y tiene el código 1.
- Error: stderr y tiene el código 2.

![Platzi. (2021). *Redirecciones: cómo funciona la shell*.](https://static.platzi.com/media/articlases/Images/image%28100%29.png)

Platzi. (2021). *Redirecciones: cómo funciona la shell*.

## Terminal

- Redirigir archivo sin concatenación → `command name-from > name-to`
- Redirigir archivo con concatenación → `command name-from >> name-to`
- Redirigir archivo con stderr → `command name-from 2> name-to`
- Redirigir archivo con stderr y stdout → `command name-from > name-to 2>&1`

# Clase 8 - Redirecciones: pipe operator

## Concepto

- Redirige un stdout como stdin en otro comando, es decir, concatena salidas como entradas.

## Terminal

- Imprimir stdout → `echo "text"`
- Concatenar stdout → `cat name-1 name-2`
- Listar y mostrar archivos → `ls -lh | less`
- Listar, guardar y mostrar archivos → `ls -lh | tee "name" | less`
- Listar, ordenar, guardar y mostrar archivos → `ls -lh | sort | tee "name" | less`
- Dibujar vaca → `cowsay "text"`
- Pintar stdout → `echo "text" | lolcat`

# Clase 9 - Encadenando comandos: operadores de control

## Concepto

- Son símbolos reservados que permiten encadenar comandos.

## Terminal

- Listar archivos, crear directorio y mostrar calendario de manera síncrona→ `ls; mkdir name; cal`
- Listar archivos, mostrar fecha y calendario de manera asíncrona → `ls & date & cal`
- Crear y cambiar directorio de manera condicional con el operador AND→ `mkdir name && cd route/`
- Cambiar directorio o crear archivo de manera condicional con el operador OR → `cd route/ || touch name`

# Clase 10 - Cómo se manejan los permisos

## Tipos de archivo

- Archivo normal → `-`
- Directorio → `d`
- Link simbólico → `l`
- Archivo de bloque especial (USB) → `b`

## Tipos de modo

- Dueño | Grupo | World
- Read: permiso de lectura y se representa con r.
- Write: permiso de escritura y se representa con w.
- Execute: permiso de ejecución y se representa con x.

![Koen S. (2020). *Unix Permissions — The Easy Way*.](https://miro.medium.com/v2/resize:fit:1400/1*Qd9k5fOi4crDc33l0VveaQ.png)

Koen S. (2020). *Unix Permissions — The Easy Way*.

## Modo simbólico

- Solo para el usuario → `u`
- Solo para el grupo → `g`
- Solo para otros (world) → `o`
- Para todos → `a`

# Clase 11 - Modificando permisos en la terminal

## Terminal

- Escribir texto en archivo → `cat > name`
- Guardar texto en archivo → `Ctrl + D`
- Cambiar permisos de archivo con representación octal → `chmod octal name`
- Eliminar permisos de archivo con modo simbólico → `chmod user-mode name`
- Agregar permisos de archivo con modo simbólico → `chmod user+mode name`
- Sobreescribir permisos de archivo con modo simbólico → `chmod user=mode name`
- Concatenar permisos de archivo con modo simbólico → `````````chmod user-1-mode,user-2user-3+mode name`
- Mostrar usuario → `whoami`
- Cambiar usuario → `su user`
- Cambiar a root → `sudo su`
- Ejecutar comandos con permisos de superusuario → `sudo command`
- Cambiar contraseña → `passwd`

# Clase 12 - Cómo configurar variables de entorno

## Terminal

- Crear link simbólico (acceso directo) → `ln -s route/ name`
- Mostrar variables de entorno → `printenv`
- Imprimir variable de entorno → `echo $variable`
- Abrir archivo para editar alias, variables de entorno, rutas, etc. → `code .bashrc`
- Agregar alias → `alias abbreviation='command'`
- Agregar variable de entorno → `NAME="text"`
- Agregar ruta → `PATH=$PATH:route/`
- Refrescar cambios → `bash`

## Conceptos

- $PATH: rutas donde están los binarios que usa el sistema.
- Manejador de paquete: importa e instala binarios en el sistema.
- .bashrc: archivo donde está la configuración de bash.

# Clase 13 - Comandos de búsqueda

## Terminal

- Localizar comando → `which command`
- Localizar archivo por nombre → `find ./ -name name` ↔ `find ~ -name name`
- Localizar por directorios → `find ./ -type d -name name`
- Localizar por archivos → `find ./ -type f -name name`
- Localizar por tamaño → `find ./ -size size`

# Clase 14 - Usando el comando grep

## Concepto

- Encuentra coincidencias dentro de un archivo de texto.

## Terminal

- Buscar texto en archivo → `grep text file`
- Buscar texto sin case-sensitive en archivo → `grep -i text file`
- Contar coincidencias en archivo → `grep -c text file`
- Buscar texto que no coincida en archivo → `grep -v text file`
- Contar palabras en archivo → `wc file` ↔ `wc -w file`
- Contar líneas en archivo → `wc -l file`
- Contar bits en archivo → `wc -c file`

# Clase 15 - Utilidades de red

## Terminal

- Mostrar configuración de red → `ifconfig`
- Enviar peticiones a url→ `ping url`
- Mostrar código fuente de url→ `curl url`
- Descargar código fuente de url → `wget url`
- Mostrar ruta hacia url → `traceroute url`
- Mostrar dispositivos de red → `netstat -i`

# Clase 16 - Comprimiendo archivos tar y zip

## Terminal

- Comprimir archivos a .tar → `tar -cvf name.tar folder/`
- Comprimir archivos a .gz → `tar -cvzf name.tar.gz folder/`
- Descomprimir archivos de .tar → `tar -xvf name.tar`
- Descomprimir archivos de .gz → `tar -xvzf name.tar.gz`
- Comprimir archivos a .zip → `zip -r name.zip folder/`
- Descomprimir archivos de .zip → `unzip name.zip`

# Clase 17 - Manejo de procesos

## Terminal

- Mostrar procesos brevemente → `ps`
- Detener proceso → `kill PID`
- Mostrar procesos detalladamente → `top`

# Clase 18 - Procesos en foreground y background

## Conceptos

- Background: proceso en ejecución que no se muestra en la terminal.
- Foreground: proceso en ejecución que se muestra en la terminal.

## Terminal

- Suspender proceso → `Ctrl + Z`
- Mostrar procesos en background → `jobs`
- Mover proceso a foreground → `fg number`
- Mover proceso a background → `command &` ↔ `bg number`

# Clase 19 - ****Editores de texto en la terminal****

## Terminal

- Abrir editor de texto → `vim`
- Salir de vim → `:q`
- Crear archivo con vim → `vim name`
- Insertar texto → `i`
- Salir de inserción → `esc`
- Buscar texto → `/text`
- Eliminar línea → `11` ↔ `dd`
- Guardar texto → `:w`
- Guardar texto y salir → `:wq`

# Clase 20 - Personalizar la terminal de comandos

## Tilix

- [https://gnunn1.github.io/tilix-web](https://gnunn1.github.io/tilix-web/)

## ZSH

- [https://github.com/ohmyzsh/ohmyzsh/wiki/Installing-ZSH](https://github.com/ohmyzsh/ohmyzsh/wiki/Installing-ZSH)

## Oh My ZSH

- [https://ohmyz.sh](https://ohmyz.sh/)

## Powerlevel10k

- [https://github.com/romkatv/powerlevel10k](https://github.com/romkatv/powerlevel10k)

## Paso a paso

- Instalar Tilix → `sudo apt install tilix`
- Instalar ZSH → `sudo apt install zsh`
- Cambiar shell a ZSH → `chsh -s $(which zsh)`
- Cuando se instale, oprimir 0.
- Instalar Oh My ZSH → `sh-c "$(wget https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh -O -)"`
- Instalar Powerlevel10k→ `git clone --depth=1 https://github.com/romkatv/powerlevel10k.git ${ZSH_CUSTOM:-$HOME/.oh-my-zsh/custom}/themes/powerlevel10k`
- Configurar Powerlevel10k → `vim .zshrc` → `ZSH_THEME="powerlevel10k/powerlevel10k”`
- Descargar e instalar fuentes desde el repositorio.
- Cambiar fuentes → `Profiles` → `Edit Profiles` → `Default` → `Custom font`
- Recargar shell → `zsh`
- Personalizar Powerlevel10k.
- Seleccionar Verbose.

# Clase 21 - Nunca pares de hackear

## Para la terminal

- [https://nostarch.com/linuxbasicsforhackers](https://nostarch.com/linuxbasicsforhackers)
- [https://nostarch.com/tlcl2](https://nostarch.com/tlcl2)

## Para la búsqueda

- [https://www.oreilly.com/library/view/grep-pocket-reference/9780596157005](https://www.oreilly.com/library/view/grep-pocket-reference/9780596157005/)
- [https://www.oreilly.com/library/view/regular-expression-pocket/9780596514273](https://www.oreilly.com/library/view/regular-expression-pocket/9780596514273/)

## Para Linux

- [https://www.oreilly.com/library/view/linux-pocket-guide/9781491927557](https://www.oreilly.com/library/view/linux-pocket-guide/9781491927557/)
- [https://www.oreilly.com/library/view/learning-the-vi/9780596529833](https://www.oreilly.com/library/view/learning-the-vi/9780596529833/)