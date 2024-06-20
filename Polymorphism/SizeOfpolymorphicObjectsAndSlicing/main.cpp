#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"
using namespace std;


int main(){
    //Comparing objects sizes
    cout << "sizeof(Shape) : " << sizeof(Shape) << endl; //dynamic : 40
    cout << "sizeof(Oval) : " << sizeof(Oval) << endl; //dynamic : 56
    cout << "sizeof(Circle) : " << sizeof(Circle) << endl; //dynamic : 56

    //Slicing
    Circle circle1(3.3,"circle1");
    Shape shape = circle1;
    shape.draw();

    return 0;
}    



