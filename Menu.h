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

        std::cout << "\n\n\t-----------Menu-----------" << std::endl;
        std::cout << "\tUsted debera escoger una de las siguientes opciones a escoger" << std::endl;
        std::cout << "1.Dibujar un Cuadrado" << std::endl;
        std::cout << "2.Dibujar un Tringulo" << std::endl;
        std::cout << "3.Dibujar un Rectangulo" << std::endl;
    }

    void mostrarMenu() {

        Shape* s = nullptr;
        Canva c;
        int option = 0;
        int cuadrado = 0;
        int triangulo = 0;

        std::cout << "Que quieres imprimir?" << std::endl;
        std::cin >> option;

        if (option == 1)
        {
            std::cout << "Que tipo de cuadrado quieres imprimir?" << std::endl;
            std::cout << "1.Relleno" << std::endl;
            std::cout << "2.Hueco" << std::endl;
            std::cin >> cuadrado;
            if (cuadrado == 1) {
                s = new Square();
            }
            else if (cuadrado == 2) {
                s = new SquareHole();
            }
        }
        else if (option == 2)
        {
            std::cout << "Que tipo de triangulo quieres imprimir?" << std::endl;
            std::cout << "1.Isoseles" << std::endl;
            std::cout << "2.Equilatero" << std::endl;
            std::cin >> triangulo;
            if (triangulo == 1) {
                s = new Triangle();
            }
            else if (triangulo == 2) {
                s = new TrianEqui();
            }
        }
        else if (option == 3)
        {
            s = new Rectangle();
        }

        if (s != nullptr)
        {
            c.printShape(s);
            delete s;
        }

    }

};