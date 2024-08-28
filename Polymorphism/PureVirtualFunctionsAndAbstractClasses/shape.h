#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <string_view>
#include <iostream>
using namespace std;

class Shape
{
protected:
    Shape() = default;
    Shape( string_view description);
public:
    virtual ~Shape() = default;
    virtual double perimeter() const = 0;

    virtual double surface() const = 0;
private:
string m_description;
};

#endif


