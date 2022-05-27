#include "Rectangle.hpp"
#include "Shape.hpp"
#include "Circle.hpp"
#include "Polygon.hpp"

#include <iostream>

int main() 
{
  Shape* Fig[8];

  Fig[0] = new Circle();
  Fig[1] = new Rectangle();
  Fig[2] = new Rectangle(1,2,5,6);
  Fig[3] = new Circle(4,2,1);
  Fig[4] = new Rectangle();
  Fig[5] = new Polygon();
  Fig[6] = new Polygon(4,2,2);

  for(auto i=0; i < 9;i++) {
    Shape* current = Fig[i];

    std::cout << current->draw() << "\n";
  }

// Liberando memoria -------------------

  for (auto i=0; i < 5;i++)
  {
    delete Fig[i];
  }

  return 0;
}
