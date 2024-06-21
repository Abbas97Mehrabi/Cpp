#ifndef CIRCLE_H
#define CIRCLE_H
#include "oval.h"
using namespace std;

class Circle : public Oval
{

public:
    Circle() = default;
    Circle(double radios , string_view description);
    ~Circle();

    virtual void draw() const override{
        cout << "Circle::draw() called. Drawing " << m_description << 
            " with radios : " << get_x_rad() << endl;
    }
    
};

#endif
