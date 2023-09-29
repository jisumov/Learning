#include <iostream>

using namespace std;

int main() {
    
    int referencia_zapato, talla_zapato;
    char descripcion_zapato[30];
    char disponible_venta;
    double costo_zapato, precio_zapato;
    
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
    cout << "Costo del zapato: " << costo_zapato << endl;
    cout << "Precio del zapato: " << precio_zapato << endl;
    cout << "Gracias por ingresar la informacion" << endl;
    cout << "\nTrabajo realizado por Jose Ignacio Suarez Montiel - FICHA 2843742" << endl;
    // Trabajo realizado por Jose Ignacio Suarez Montiel - FICHA 2843742
    
    system("pause");
    return EXIT_SUCCESS;
    
}
