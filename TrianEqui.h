#pragma once
#include <iostream>
#include "Shape.h"


class TrianEqui : public Shape
{
	public:
		void draw()
		{
			for (int i = 0; i < this->lado; i++) 
			{	
				for (int j = 0; j< this->lado-i; j++)
				{
					std::cout << " ";
				}
				for (int j = 0 ; j<i*2+1; j++) 
				{
					std::cout << "*";
				}
				std::cout<<std::endl;
			}
		}
};

