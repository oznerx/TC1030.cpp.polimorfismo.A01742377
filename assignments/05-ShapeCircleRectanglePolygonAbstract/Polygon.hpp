#pragma once 
#include "Shape.hpp"

class Polygon : public Shape{
    private:
    int n;
    int lado;
    int apotema;

    public:
    Polygon();
    Polygon(int,int,int);
    std::string draw();
    double getArea();
};