#include <iostream>
#include <memory>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
using namespace std;

int main(){
    // Shape *shape_ptr = new Shape; //Compiler error
    const Shape *shape_rect = new Rectangle(10,10,"rect1");
    double surface = shape_rect->surface();
    cout << "Dynamic type of shape_rect : " << typeid(*shape_rect).name() << endl;
    cout << "The surface of shape rect is : " << surface << endl;
    
    cout << "------------------------------------" << endl;
    
    const Shape *shape_circle = new Circle(10,"circle1");
     surface = shape_circle->surface();
    cout << "Dynamic type of shape_rect : " << typeid(*shape_circle).name() << endl;
    cout << "The surface of shape circle is : " << surface << endl;

    return 0;
}