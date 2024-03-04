#include <iostream>

const double PI = 3.14;
class Cylinder
{
private:
     double base_radius {1.0};
     double height{1.0};

public:
     Cylinder(/* args */){
          base_radius = 2.0;
          height = 2.0;
     };
     //Constructors
     Cylinder(double radius_param, double height_param){
          base_radius = radius_param;
          height = height_param;
     }
     //Functions(methods)
     double volume(){
          return PI * base_radius * base_radius * height;
     }
};

int main(){

     Cylinder cylinder1(10,4);
     std::cout << "volume : " << cylinder1.volume() << std::endl;



     return 0;
     
}