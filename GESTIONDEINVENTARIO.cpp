//BootCamp Programacion de CERO A POO
// MINI-PROYECTO GESTION DE INVENTARIO BASICA
//Autor: ANTONELA BRITO 
// Fecha: 17/5/2026

#include <iostream>
#include <string>
// Se utiliza solo para el formato de la tabla
#include <iomanip> 
using namespace std;

const int MAX_PRODUCTOS = 100;

// Declarar las funciones
void mostrarMenu();
void registrarProducto(string nombres[], float precios[], int cantidades[], int &total);
void mostrarInventario(string nombres[], float precios[], int cantidades[], int total);
void calcularTotalInventario(float precios[], int cantidades[], int total);
void reporteStockBajo(string nombres[], int cantidades[], int total);

int main() {
    // Declaracion de arreglos 
    string nombres[MAX_PRODUCTOS];
    float precios[MAX_PRODUCTOS];
    int cantidades[MAX_PRODUCTOS];
    
    // Declar variables
    int totalProductos = 0;
    int opcion = 0;

    // Bucle principal 
    do {
        mostrarMenu();
        cin >> opcion;

        switch(opcion) {
            case 1:
                registrarProducto(nombres, precios, cantidades, totalProductos);
                break;
            case 2:
                mostrarInventario(nombres, precios, cantidades, totalProductos);
                break;
            case 3:
                calcularTotalInventario(precios, cantidades, totalProductos);
                break;
            case 4:
                reporteStockBajo(nombres, cantidades, totalProductos);
                break;
            case 5:
                cout << "\nGracias por usar el Programa\n";
                break;
            default:
                cout << "\n Opcion invalida. Seleccione una opcion del 1 al 5.\n";
        }
    } while(opcion != 5);

    return 0;
}
void mostrarMenu() {
    cout << "      -SISTEMA DE INVENTARIO-     \n";
    cout << "----------------------------------------\n";
    cout << "1. Registrar nuevo producto\n";
    cout << "2. Mostrar inventario actual\n";
    cout << "3. Calcular valor total del inventario\n";
    cout << "4. Reporte de stock bajo (Reabastecimiento)\n";
    cout << "5. Salir\n";
    cout << "----------------------------------------\n";
    cout << "Seleccione una opcion: ";
}
void registrarProducto(string nombres[], float precios[], int cantidades[], int &total) {
    if (total >= MAX_PRODUCTOS) {
        cout << "\n El inventario esta lleno no se pueden registrar mas productos.\n";
        return;
    }

    cin.ignore();
    
    cout << "\n--- REGISTRAR PRODUCTO ---\n";
    cout << "Nombre del producto: ";
    getline(cin, nombres[total]);

    // Validaciones para precio y cantidad
    do {
        cout << "Precio unitario ($): ";
        cin >> precios[total];
        if (precios[total] < 0) {
            cout << "El precio no puede ser negativo ,intente de nuevo.\n";
        }
    } while (precios[total] < 0);

    do {
        cout << "Cantidad en stock: ";
        cin >> cantidades[total];
        if (cantidades[total] < 0) {
            cout << " La cantidad no puede ser negativa ,intente de nuevo.\n";
        }
    } while (cantidades[total] < 0);

    total++; 
    cout << "\nProducto registrado con exito.\n";
}
