#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"
using namespace std;

int main(){
    //Circle circle1(7.2,"circle1");
   // Oval oval1(13.3,1.2,"Oval1");
    
   // oval1.draw();
   // oval1.draw(53);


   // circle1.draw();
    //circle1.draw(43);

    Shape *shape_ptr = new Circle(10,"circle1");
    shape_ptr->draw(45);
    
    
    return 0;
}