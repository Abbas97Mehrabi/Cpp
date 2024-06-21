#ifndef OVAL_H
#define OVAL_H
#include "shape.h"
#include <string_view>
using namespace std;
class Oval : public Shape
{
public:
    Oval() = default;
    Oval(double x_radios, double y_radios, string_view description);
    ~Oval();
    virtual void draw() const override{
        cout << "Oval::draw() called. Drawing " << m_description << 
        " with m_x_radios : " << m_x_radios << " and m_y_radios " << m_y_radios << endl;
    }
    
    virtual void draw(int color_depth, string_view color) const{
        cout << "Shape::Drawing with color depth : " << color_depth 
        << " and color : " << color << endl;
    }
public:
     double get_x_rad() const{
        return m_x_radios;
    }
     double get_y_rad() const{
        return m_y_radios;
    }
private:
double m_x_radios{0.0};
double m_y_radios{0.0};
    
};

#endif 
