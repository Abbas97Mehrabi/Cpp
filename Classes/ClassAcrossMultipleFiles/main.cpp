#include <iostream>
#include "constants.h"
#include "cylinder.h"
#include "cylinder.cpp"



int main(){
     
     Cylinder cylinder1(10,10);
     std::cout << "volume() : " << cylinder1.volume() << std::endl;
     
     //Modify our object
     cylinder1.set_base_radius(100);
     cylinder1.set_height(10);
     std::cout << "volume() : " << cylinder1.volume() << std::endl;

     //managing stack objects through pointers
     Cylinder* p_cylinder1 = &cylinder1;
     //std::cout << "volume() : " << (*p_cylinder1).volume() << std::endl;
     std::cout << "volume() : " << p_cylinder1->volume() << std::endl; //New syntax

     //create a cylinder heap object through the new operator
     Cylinder* p_cylinder2 = new Cylinder(100, 2);
     std::cout << "volume(p_cylinder2) : " << p_cylinder2->volume() << std::endl;
     std::cout << "base_rad(p_cylinder2) : " << p_cylinder2->get_base_radius() << std::endl;

     delete p_cylinder1;
     delete p_cylinder2;

     return 0;
     
}