#include <iostream>

const double PI{3.141592653589793};
class Cylinder
{
private:
     double base_radius{1};
     double height{1};
public:
     Cylinder() = default;
     Cylinder(double radius_param , double height_param){
          base_radius = radius_param;
          height = height_param;
     }
     double volume(){
          return PI * base_radius * base_radius * height;
     }
     
     //Getters
     double get_base_radius(){
          return base_radius;
     }
     double get_height(){
          return height;
     }

     void set_base_radius(double radius_param){
          base_radius = radius_param;
     }
     void set_height(double height_param){
          height = height_param;
     }
};

int main(){
     
     Cylinder cylinder1(10,10);
     std::cout << "base_radius : " << cylinder1.volume() << std::endl;
     
     //Modify our object
     cylinder1.set_base_radius(100);
     cylinder1.set_height(10);
     std::cout << "base_radius : " << cylinder1.volume() << std::endl;

     return 0;
     
}