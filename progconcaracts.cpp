#include <iostream>
#include <cstring> //la biblioteca de strcmp

using namespace std;

void menu();
void ejerc8_8();
void ejerc8_18();
void programAsig();

int main()
{
    menu();

    return 0;
}

void menu()
{
    int opciones;

    cout << "Ingrese el numero del programa a ejecutar" << endl;
    cout << "***--Opciones--***" << endl;
    cout << "1. Ejercicio 8.9." << endl;
    cout << "2. Ejercicio 8.18." << endl;
    cout << "3. Ejercicio 1 asignado." << endl;
    cin >> opciones;

    switch (opciones)
    {
    case 1:
        ejerc8_8();
        break;
    case 2:
        ejerc8_18();
        break;
    case 3:
        programAsig();
        break;

    default:
        cout << "Ingrese opciones validas. Sean de 1-3.." << endl;
        break;
    }
}

void ejerc8_8()
{
    char cadena1[200];
    char cadena2[200];
    int slrOrpt;

    cout << "Escriba un programa que utilice la funcion strcmp, para comparar dos cadenas introducidas por el usuario. Y que indique si la cad1 es mayor, igual o menor que cad2." << endl;
    cout << "Escriba la cadena 1: " << endl;
    cin.getline(cadena1, sizeof(cadena1));
    
    cout << "Escriba la cadena 2: " << endl;
    cin.getline(cadena2, sizeof(cadena2));

    int resultado = strcmp(cadena1, cadena2);
    if (resultado == 0) 
    {
        cout << "Las cadenas son iguales." << endl;
    } else if (resultado < 0) {
        cout << "La cadenas1 es menor que la cadena2.";
    } else {
        cout << "La cadena1 es mayor que la cadena2." << endl;
    }

    cout << "Desea salir o repetir el programa ?" << endl;
    cout << "1. salir..." << endl;
    cout << "2. repetir..." << endl;
    cin >> slrOrpt;
    switch (slrOrpt)
    {
    case 1: 
        menu();
        break;
    case 2:
        ejerc8_8();
        break;
    
    default:
        cout << "Digite un # del 1-2..." << endl;
        break;
    }
}

void ejerc8_18()
{
    char texto[500];
    char caracter;
    int slrOrpt;

    cout << "Escriba un programa que introduzca varias lineas de texto y un caracter de busqueda y utilize la funcion strchr para determinar todas las ocurrencias del caracter, en las lineas de texto." << endl;
    cout << "Escriba la cadena de texto: ";
    cin.getline(texto, 500);
    cout << "Escriba el caracter a buscar: ";
    cin >> caracter;

    char *resultado = strchr(texto, caracter);

    if (resultado) {
        cout << "El caracter '" << caracter << "' se encontro en la cadena en la posicion: " << (resultado - texto) << endl;
    } else {
        cout << "El caracter no se encontro en la cadena de texto. Introduzca otro caracter..." << endl;
    }
    
    //primero va a escribir el texto largo y luego va a digitar el caracter a buscar y retornara un mensaje con el caracter que busca y cuantas veces se repitio.

    cout << "Desea salir o repetir el programa ?" << endl;
    cout << "1. salir..." << endl;
    cout << "2. repetir..." << endl;
    cin >> slrOrpt;
    switch (slrOrpt)
    {
    case 1: 
        menu();
        break;
    case 2:
        ejerc8_18();
        break;
    
    default:
        cout << "Digite un # del 1-2..." << endl;
        break;
    }  
}

void programAsig()
{
    int slrOrpt;
    // finProgm
    cout << "Desea salir o repetir el programa ?" << endl;
    cout << "1. salir..." << endl;
    cout << "2. repetir..." << endl;
    cin >> slrOrpt;
    switch (slrOrpt)
    {
    case 1: 
        menu();
        break;
    case 2:
        ejerc8_8();
        break;
    
    default:
        cout << "Digite un # del 1-2..." << endl;
        break;
    }  
}
