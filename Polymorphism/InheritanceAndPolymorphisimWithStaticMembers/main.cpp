#include <iostream>
#include "shape.h"
#include "ellipse.h"
using namespace std;

int main(){
    
    //Shape
    Shape shape1("shape1");
    cout << "shape count : " << Shape::m_count << endl;//1

    Shape shape2("shape2");
    cout << "shape count : " << Shape::m_count << endl;//2

    Shape shape3("shape3");
    cout << "shape count : " << Shape::m_count << endl;//3

    cout << "*******************************" << endl;

    //Ellipse
    Ellipse ellipse1(10,12,"ellipse1");
    cout << "shape count : " << Shape::m_count << endl;//4
    cout << "Ellipse count : " << Ellipse::m_count << endl;//1

    cout << "*******************************" << endl;

    //Shape polimorphisim

    Shape *shapes[]{&shape1,&ellipse1};
    for(auto &s : shapes){
        cout << "count : " << s->get_count() << endl;
    }
    return 0;
}