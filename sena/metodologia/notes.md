# Metodología de la Programación de Sistemas Informáticos

# Semana 1 - Fundamentos de programación

## Conceptos generales de programación

- El computador tiene grandes capacidades de almacenamiento de datos y procesamiento de información.
- El computador interpreta y ejecuta instrucciones.
- El programador traduce el problema y su respectiva solución en lenguaje de programación.

### ¿Qué es un computador?

- Es un dispositivo electrónico que procesa información y obtiene resultados.
- Las entradas o inputs son los datos e información que entran al sistema.
- Las salidas u outputs son los resultados del procesamiento de las entradas.
- Diversidad de dispositivos para comunicarse con un computador.

### Hardware y software

- Hardware: componentes físicos.
- Software: conjunto de programas.
- Sistema operativo: facilita los procesos.

## Organización física del computador

- Unidad Central de Proceso (CPU): controla el correcto funcionamiento de todos los componentes (UC) y ejecuta instrucciones aritméticas y lógicas (UAL).
- Memoria: permite a los programas estar a disposición del usuario para su ejecución.

### Tipos de memoria

- Memoria RAM: significa Random Access Memory y permite ejecutar aplicaciones, guardando instrucciones y datos temporalmente.
- Memoria ROM: significa Read Only Memory y es utilizada para arrancar la BIOS, donde se guarda toda la configuración del hardware.
- Memoria caché: reserva información a altas velocidades de lectura y escritura.

### Entrada y salida

- Unidad de entrada: permite ingresar datos en el computador a través de teclados, mouse, lectores de códigos de barras, memorias USB, etc.
- Unidad de salida: permite presentar los resultados del procesamiento de datos a través de pantallas, impresoras, memorias USB, DVDs, etc.

### Estructura de un sistema de computación

![Tutorials Mate. (2023). *Block Diagram of Computer*.](https://1.bp.blogspot.com/-bU-HOZnxYSg/XopGA9eZJPI/AAAAAAAAAZM/YrZ4atklFFIbEqEHLa4Uppw_k53D8-_-ACLcBGAsYHQ/s1600/Block%2BDiagram%2Bof%2BComputer%2B%2528www.tutorialsmate.com%2529.png)

Tutorials Mate. (2023). *Block Diagram of Computer*.

## Algoritmos y programa

- Algoritmo: conjunto de instrucciones ordenadas, definidas y finitas que resuelven un problema determinado.
- Debe existir un único inicio y fin.
- Programa: conjunto de algoritmos que realizan una tarea.
- Compuestos de entradas, procesos y salidas.

### Etapas de la solución

- Análisis del programa.
- Construcción del algoritmo.
- Verificación del algoritmo.

### Características del algoritmo

- Preciso: pasos claros.
- Determinado: resultados esperados.
- Finito: longitud fija.

### Algoritmos cualitativos y cuantitativos

- Cualitativo: instrucciones descritas con palabras.
- Cuantitativo: instrucciones que involucran cálculos.

## Proceso de Programación

### Definición y análisis del problema

- Se debe entender la necesidad a resolver

### Diseño de algoritmo

- Se representa la lógica del algoritmo.
- Utiliza diagramas de flujo y pseudocódigos.

### Codificación del programa

- Se realiza el código fuente.
- Utiliza lenguajes de programación.

### Implantación del programa

- Se pone en marcha la solución.

### Mantenimiento del programa

- Se ajustan detalles de la solución.

## Técnicas de representación de algoritmos

### Diagrama de flujo

- Es la representación gráfica y lógica de un algoritmo.

### Algunos símbolos

![Gliffy. (2019). *Guide to Flowchart Symbols, from Basic to Advanced*.](https://www.gliffy.com/sites/default/files/image/2020-06/guidetoflowchartsymbols_mostcommonimg.png)

Gliffy. (2019). *Guide to Flowchart Symbols, from Basic to Advanced*.

### Recomendaciones

- Usar únicamente líneas horizontales y verticales.
- Usar conectores solo cuando sea necesario.
- Relacionar todas las líneas.
- Evitar cruce de líneas.

### Pseudocódigo

- Es la definición de estructuras de datos y lógica de un algoritmo.
- Tiene una sintaxis similar a los lenguajes de programación.

# Semana 3 - Estructuras algorítmicas selectivas

## Conceptos

- Se utilizan para resolver situaciones que implican la toma de decisiones.
- Decisión lógica denominada condición.
- Clasificadas en:
    - Estructura selectiva simple.
    - Estructura selectiva doble o anidada.
    - Estructura selectiva múltiple.

## Estructura selectiva simple

- Si la condición a evaluar se cumple, se ejecutarán una serie de instrucciones. De lo contrario, se pasa por alto dicha operación.

![Toppr. (2023). *Python if, if…else, if…elif…else and Nested if Statement*.](https://d1whtlypfis84e.cloudfront.net/guides/wp-content/uploads/2021/06/29085822/if-flowchart-606x1024.jpg)

Toppr. (2023). *Python if, if…else, if…elif…else and Nested if Statement*.

| Si | Identifica la estructura de control condicional. |
| --- | --- |
| Condición | Es la expresión lógica que denota la situación específica mediante la comparación de dos operadores, para dar un resultado booleano (falso, verdadero). |
| Acción(es) | Es la instrucción o conjunto de instrucciones que se ejecutarán en el bloque correspondiente. |
| Fin si | Indica el fin de la estructura de selección. |

## Estructura selectiva doble

- Si la condición a evaluar se cumple, se ejecutarán una serie de instrucciones. De lo contrario, se ejecutarán otra serie de instrucciones.

![Toppr. (2023). *Python if, if…else, if…elif…else and Nested if Statement*.](https://d1whtlypfis84e.cloudfront.net/guides/wp-content/uploads/2021/06/29090322/if-else-flowchart.jpg)

Toppr. (2023). *Python if, if…else, if…elif…else and Nested if Statement*.

| Si | Identifica la estructura de control condicional. |
| --- | --- |
| Condición | Es la expresión lógica que denota la situación específica mediante la comparación de dos operadores, para dar un resultado booleano (falso, verdadero). |
| Entonces | Indica el curso de acción si se cumple la condición. |
| Acción(es) | Es la instrucción o conjunto de instrucciones que se ejecutarán en el bloque correspondiente. |
| Sino | Indica el curso de acción cuando no se cumple la condición. |
| Fin si | Indica el fin de la estructura de selección. |

## Estructura anidada

- Pueden haber bifurcaciones en los condicionales, es decir, puede tener anidada otra estructura y esta a su vez a otra y así sucesivamente.

![Toppr. (2023). *Python if, if…else, if…elif…else and Nested if Statement*.](https://d1whtlypfis84e.cloudfront.net/guides/wp-content/uploads/2021/06/29090653/If-elif-else-flowchart-768x806.jpg)

Toppr. (2023). *Python if, if…else, if…elif…else and Nested if Statement*.

| Case | Identifica la estructura de selección múltiple. |
| --- | --- |
| Variable | Es la variable que indica la opción a elegir. |
| 1: 2: 3:.. | Son las etiquetas que indican cada acción. |
| Acción(es) | Es la instrucción o conjunto de instrucciones que se ejecutarán en el bloque correspondiente. |
| Sino | Indica el curso de acción cuando no se cumple la condición. |
| Fin si | Indica el fin de la estructura de selección. |

# Semana 4 - Estructuras algorítmicas repetitivas

## Conceptos

- Se utilizan para formar ciclos repetitivos predeterminados.
- Se controlan por medio de variables contadoras, las cuales incrementan o decrementan.

## Estructura repetitiva para (for)

![Toppr. (2023). *Python for Loop*.](https://d1whtlypfis84e.cloudfront.net/guides/wp-content/uploads/2021/06/28104817/for-loop-flowchart.jpg)

Toppr. (2023). *Python for Loop*.

| Para | Es la palabra reservada que identifica el problema. |
| --- | --- |
| Contador | Es la variable entera que se utiliza para controlar el ciclo.
Esta variable toma el valor inicial, que se incrementa de acuerdo con el incremento propuesto hasta llegar al valor final.
La diferencia entre valor inicial y valor final será el número de veces que se repita el ciclo. |
| Valor inicial | Es el valor inicial que tomará el contador, puede ser constante, variable o expresión entera. |
| Valor final | Es el valor final que tomará el contador, puede ser constante, variable o expresión entera. |
| Incremento | Es la magnitud del incremento o decremento del contador, si este no se indica se supone que el incremento es de 1. |
| Acción(es) | Es la instrucción o conjunto de instrucciones que se ejecutarán en el bloque correspondiente. |

## Estructura repetitiva mientras (while)

| Para | Es la palabra reservada que identifica el problema. |
| --- | --- |
| Contador | Es la variable entera que se utiliza para controlar el ciclo.
Esta variable toma el valor inicial, que se incrementa de acuerdo con el incremento propuesto hasta llegar al valor final.
La diferencia entre valor inicial y valor final será el número de veces que se repita el ciclo. |
| Valor inicial | Es el valor inicial que tomará el contador, puede ser constante, variable o expresión entera. |
| Valor final | Es el valor final que tomará el contador, puede ser constante, variable o expresión entera. |
| Incremento | Es la magnitud del incremento o decremento del contador, si este no se indica se supone que el incremento es de 1. |
| Acción(es) | Es la instrucción o conjunto de instrucciones que se ejecutarán en el bloque correspondiente. |