#pragma once
#include <iostream>
#include "Square.h"
#include "SquareHole.h"
#include "Triangle.h"
#include "TrianEqui.h"
#include "Rectangle.h"
#include "Canva.h"
#include "Menu.h"

class Menu : public Shape {
    
    public:
        void imprimirMenu() {

            std::cout << "\t-----------Menu-----------" << std::endl;
            std::cout << "\tUsted debera escoger una de las siguientes opciones a escoger" << std::endl;
            std::cout << "1.Dibujar un Cuadrado" << std::endl;
            std::cout << "2.Dibujar un Tringulo" << std::endl;
            std::cout << "3.Dibujar un Rectangulo" << std::endl;
        }

        void mostrarMenu() {
        
            Shape* s = nullptr;
            Canva c;
            int option = 0;

        std::cout << "Que quieres imprimir?" << std::endl;
        std::cin >> option;

        if (option == 1)
        {
            s = new Square();
        }
        else if (option == 2) 
        {
            s = new Triangle();
        }
        /*else if (option == 3)
            s = new Rectangle();*/
        else if (option == 4) {
            s = new TrianEqui();
        }
        if (s != nullptr)
        {
            c.printShape(s);
            delete s;
        }

        }
    
};


