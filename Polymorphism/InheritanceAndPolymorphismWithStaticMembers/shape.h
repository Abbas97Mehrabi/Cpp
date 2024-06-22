#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include <string_view>
#include <iostream>
using namespace std;

class Shape
{
public:
    Shape();
    Shape( string_view description);
    ~Shape();
    virtual void draw() const{
        cout << "Shape::draw() called. Drawing " << m_description << endl;
    }

    virtual int get_count() const {
         return m_count;
    }
    static int m_count;
protected:
string m_description{""};
};

#endif


