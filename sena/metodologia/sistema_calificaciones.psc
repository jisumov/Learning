Algoritmo sistema_calificaciones
	
	Escribir "José Ignacio Suárez Montiel - FICHA 2821949"
	
	// Declaración de variables
	Definir nombre_estudiante Como Caracter
	Definir codigo_estudiante Como Entero
	Definir nota_primer_parcial, nota_segundo_parcial, nota_examen_final, nota_definitiva Como Real
	Definir es_aprobado Como Logico
	
	// Entradas y salidas del sistema
	Escribir "Bienvenido/a al sistema de calificaciones"
	Escribir "Ingresa el nombre del estudiante: "
	Leer nombre_estudiante
	Escribir "Ingresa el código de " nombre_estudiante ": "
	Leer codigo_estudiante
	Escribir "Ingresa la nota del primer parcial de " nombre_estudiante ": "
	Leer nota_primer_parcial
	Si (nota_primer_parcial>=0.0 Y nota_primer_parcial<=5.0) Entonces
		Escribir "Ingresa la nota del segundo parcial de " nombre_estudiante ": "
		Leer nota_segundo_parcial
		Si (nota_segundo_parcial>=0.0 Y nota_segundo_parcial<=5.0) Entonces
			Escribir "Ingresa la nota del examen final de " nombre_estudiante ": "
			Leer nota_examen_final
			Si (nota_examen_final>=0.0 Y nota_examen_final<=5.0) Entonces
				nota_definitiva = nota_primer_parcial*0.35+nota_segundo_parcial*0.35+nota_examen_final*0.30
				es_aprobado = nota_definitiva>=3.5
				Si es_aprobado Entonces
					Escribir "El estudiante " nombre_estudiante ", con código " codigo_estudiante ", aprobó la asignatura con una nota definitiva de " nota_definitiva
				SiNo
					Escribir "El estudiante " nombre_estudiante ", con código " codigo_estudiante ", reprobó la asignatura con una nota definitiva de " nota_definitiva
				FinSi
			SiNo
				Escribir "La nota del examen final está fuera del rango"
			FinSi
		SiNo
			Escribir "La nota del segundo parcial está fuera del rango"
		FinSi
	SiNo
		Escribir "La nota del primer parcial está fuera del rango"
	FinSi

FinAlgoritmo