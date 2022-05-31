#include "Polygon.hpp"

Polygon :: Polygon()
{
    n = 0;
    lado = 0;
    apotema = 0;
}

Polygon :: Polygon(int n ,int lado ,int apotema)
{
    this->n = n;
    this->lado = lado;
    this->apotema = apotema;
}

std::string Polygon :: draw()
{
    return "soy un polígono";
}
double Polygon:: getArea()
{    
    return ((n*lado*apotema/2));
}