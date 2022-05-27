#include "Polygon.hpp"

Polygon::Polygon()
{
    a = 0;
    n = 0;
    l = 0;

}

Polygon::Polygon(int nlados, double apotema , double lado) : Shape{}
{
    n = nlados;
    a = apotema;
    l = lado;
}

int Polygon::getApotema()
{
    return a;
}

std::string Polygon::draw()
{
    return "soy un Poligono";
}