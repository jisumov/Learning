#include <iostream>

using namespace std;

int main() {
    
    int referencia_zapato, talla_zapato, cantidad_zapato;
    char descripcion_zapato[30];
    char disponible_venta;
    double costo_zapato, precio_zapato, costo_total, precio_total, utilidad_unidad, 
    utilidad_total, porcentaje_utilidad;
    
    cout << "Bienvenido/a al Sistema de Zapatos" << endl;
    cout << "Ingresa la referencia del zapato: ";
    cin >> referencia_zapato;
    cin.ignore(); // Limpia el buffer
    cout << "Ingresa la descripcion del zapato: ";
    cin.getline(descripcion_zapato,30);
    cout << "Ingresa la talla del zapato: ";
    cin >> talla_zapato;
    cout << "Ingresa si el zapato esta disponible para venta [S] o no [N]: ";
    cin >> disponible_venta;
    cout << "Ingresa la cantidad de zapatos: ";
    cin >> cantidad_zapato;
    cout << "Ingresa el costo del zapato: ";
    cin >> costo_zapato;
    cout << "Ingresa el precio del zapato: ";
    cin >> precio_zapato;
    
    system("cls");
    
    cout << "Resumen del zapato\n" << endl;
    cout << "Referencia del zapato: " << referencia_zapato << endl;
    cout << "Descripcion del zapato: " << descripcion_zapato << endl;
    cout << "Talla del zapato: " << talla_zapato << endl;
    cout << "Disponibilidad del zapato: " << disponible_venta << endl;
    cout << "Cantidad de zapatos: " << cantidad_zapato << endl;
    cout << "Costo por unidad: " << costo_zapato << endl;
    costo_total = costo_zapato * cantidad_zapato;
    cout << "Costo de " << cantidad_zapato << " zapatos: " << costo_total << endl;
    cout << "Precio por unidad: " << precio_zapato << endl;
    precio_total = precio_zapato * cantidad_zapato;
    cout << "Precio de " << cantidad_zapato << " zapatos: " << precio_total << endl;
    utilidad_unidad = precio_zapato - costo_zapato;
    cout << "Utilidad por unidad: " << utilidad_unidad << endl;
    utilidad_total = utilidad_unidad * cantidad_zapato;
    cout << "Utilidad total: " << utilidad_total << endl;
    porcentaje_utilidad = utilidad_total * 100 / precio_total;
    cout << "Porcentaje utilidad: " << porcentaje_utilidad << endl;

    cout << "Gracias por ingresar la informacion" << endl;
    cout << "\nTrabajo realizado por Jose Ignacio Suarez Montiel - FICHA 2843742" << endl;
    // Trabajo realizado por Jose Ignacio Suarez Montiel - FICHA 2843742
    
    system("pause");
    return EXIT_SUCCESS;
    
}