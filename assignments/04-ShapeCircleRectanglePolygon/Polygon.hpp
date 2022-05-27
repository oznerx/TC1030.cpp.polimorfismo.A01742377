#pragma once

#include "Shape.hpp"
class Polygon : public Shape
{
private:
    int n;
    double a;
    double l;

public:
    Polygon();
    Polygon(int, double, double);
    int getApotema();
    std::string draw() override;    
};