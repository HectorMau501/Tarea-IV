#pragma once
#include "Shape.h"
#include <iostream>

class Square : public Shape {

public:
    Square() 
    {
        std::cout << "se crea cuadrado" << std::endl;
    }
    ~Square() 
    {
        std::cout << "Se destruye cuadrado" << std::endl;
    }

    void draw() {
        for (int i = 0; i < this->lado; i++)
        {

            for (int j = 0; j < this->lado; j++) 
            {
                
                if (i == 0 || j == 0 || i == lado - 1 || j == lado - 1)
                {
                    std::cout << " *";
                }
                else 
                {
                    std::cout << "  ";
                }
            }
            std::cout << std::endl;
        }
    }




};
