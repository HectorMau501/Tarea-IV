#pragma once
#include "Shape.h"
#include <iostream>

class Rectangle : public Shape {

public:
    void draw() {
        for (int i = 0; i < this->lado; i++)
        {
            for (int j = 0; j < this->lado; j++)
            {
                std::cout << "*";

            }
            std::cout << std::endl;
        }
    }

};

