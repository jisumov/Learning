Algoritmo sistema_calificaciones_mejorado
	Escribir 'Jos� Ignacio Su�rez Montiel - FICHA 2821949'
	// Declaraci�n de variables
	Definir nombre_estudiante Como Cadena
	Definir codigo_estudiante, contador Como Entero
	Definir nota_parcial, nota_definitiva Como Real
	Definir es_aprobado Como L�gico
	// Instanciaci�n de variables
	contador <- 1
	nota_definitiva <- 0.0
	// Entradas y salidas del sistema
	Escribir 'Bienvenido/a al sistema de calificaciones mejorado'
	Escribir 'Ingresa el nombre del estudiante: '
	Leer nombre_estudiante
	Escribir 'Ingresa el c�digo de ', nombre_estudiante, ': '
	Leer codigo_estudiante
	Mientras contador<=5 Hacer
		Escribir 'Ingresa la nota ', contador, ': '
		Leer nota_parcial
		Si nota_parcial>=0.0 Y nota_parcial<=5.0 Entonces
			nota_definitiva <- nota_definitiva+nota_parcial
			contador <- contador+1
		SiNo
			Escribir 'Nota fuera del rango, por favor intenta nuevamente'
		FinSi
	FinMientras
	nota_definitiva <- nota_definitiva/5
	es_aprobado <- nota_definitiva>3.0
	Si es_aprobado Entonces
		Escribir 'El estudiante ', nombre_estudiante, ', con c�digo ', codigo_estudiante, ', aprob� la asignatura con una nota definitiva de ', nota_definitiva
	SiNo
		Escribir 'El estudiante ', nombre_estudiante, ', con c�digo ', codigo_estudiante, ', reprob� la asignatura con una nota definitiva de ', nota_definitiva
	FinSi
FinAlgoritmo
