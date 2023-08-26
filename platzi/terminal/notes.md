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

- Generar stdout → `echo "text"`
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