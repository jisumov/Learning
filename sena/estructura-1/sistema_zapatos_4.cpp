#include <iostream>

using namespace std;

int main() {
    
    int referencia_zapato, talla_zapato;
    char descripcion_zapato[30], esta_registrando_aux;
    double costo_zapato;
    bool esta_registrando = true;
    
    cout << "Bienvenido/a al Sistema de Zapatos" << endl;
    do {
        cout << "¿Desea registrar un zapato? Si [S] o No [N]" << endl;
        cin >> esta_registrando_aux;
        if (esta_registrando_aux == 'N') {
            esta_registrando = false;
        } else if (esta_registrando_aux == 'S') {
            cout << "Ingresa la referencia del zapato: ";
            cin >> referencia_zapato;
            cout << "Ingresa la descripcion del zapato: ";
            cin.getline(descripcion_zapato,30);
            cout << "Ingresa la talla del zapato: ";
            cin >> talla_zapato;
            cout << "Ingresa el costo del zapato: ";
            cin >> costo_zapato;
        } else {
            cout << "Error en el sistema";
            esta_registrando = false;
        }
    } while (esta_registrando);
    
    cout << "Gracias por ingresar la informacion" << endl;
    cout << "\nTrabajo realizado por Jose Ignacio Suarez Montiel - FICHA 2843742" << endl;
    // Trabajo realizado por Jose Ignacio Suarez Montiel - FICHA 2843742
    
    system("pause");
    return EXIT_SUCCESS;
    
}
