// SimplePOO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "SquareHole.h"
#include "Triangle.h"
#include "TrianEqui.h"
#include "Rectangle.h"
#include "Canva.h"
#include "Menu.h"



int main() {

    //Menu a;

    //a.


    Menu* m = nullptr;
    Canva c;
     

    std::cout << "\t\tHector Mauricio Rodriguez Salazar" << std::endl;
    std::cout << "\t\tBienvenido" << std::endl;
    std::cout << "\t\tPrograma con el tema de Polimorfismo" << std::endl;

    
    m->imprimirMenu();
    m->mostrarMenu();

    if (m!= nullptr)
    {
        c.printShape(m);
        delete m;
    }

    std::cout << "---------------------------------" << std::endl;

    return 1;
}






// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
