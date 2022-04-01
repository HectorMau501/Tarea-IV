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


        }






        void mostrarMenu() {
        
            Shape* s = nullptr;
            Canva c;
            int option = 0;


        std::cout << "Hector Mauricio Rodriguez Salazar" << std::endl;
        std::cout << "Bienvenido" << std::endl;
        std::cin >> option;


        if (option == 1) {
            s = new Square();
        }

        else if (option == 2) {
            s = new Triangle();
        }
        /*else if (option == 3)
            s = new Rectangle();*/
        else if (option == 4)
            s = new TrianEqui();

        if (s != nullptr)
        {
            c.printShape(s);
            delete s;
        }

        }
    
};


