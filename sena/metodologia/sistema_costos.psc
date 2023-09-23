Algoritmo sistema_costos
	
	Escribir "José Ignacio Suárez Montiel - FICHA 2821949"
	
	// Declaración de variables
	Definir nombre_producto Como Caracter
	Definir cantidad_producto Como Entero
	Definir costo_unitario_producto Como Real
	Definir precio_unitario_producto Como Real
	Definir valor_total_compra Como Real
	Definir valor_total_venta Como Real
	Definir utilidad_total_venta Como Real
	
	// Entradas del sistema
	Escribir "Bienvenido/a al sistema de costo"
	Escribir "Ingresa el nombre del producto: "
	Leer nombre_producto
	Escribir "Ingresa la cantidad de " nombre_producto ": "
	Leer cantidad_producto
	Escribir "Ingresa el costo unitario de " nombre_producto ": "
	Leer costo_unitario_producto
	Escribir "Ingresa el precio unitario de " nombre_producto  ": "
	Leer precio_unitario_producto
	
	// Salidas del sistema
	valor_total_compra = cantidad_producto*costo_unitario_producto
	valor_total_venta = cantidad_producto*precio_unitario_producto
	utilidad_total_venta = valor_total_venta - valor_total_compra
	Escribir "El valor total de compra de " nombre_producto " es: $" valor_total_compra
	Escribir "El valor total de venta de " nombre_producto " es: $" valor_total_venta
	Escribir "La utilidad total de venta de " nombre_producto " es: $" utilidad_total_venta
	
FinAlgoritmo