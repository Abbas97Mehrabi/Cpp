#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder
{
private:
     double base_radius{1};
     double height{1};
public:
     Cylinder() = default;
     Cylinder(double radius_param , double height_param);
     double volume();
     
     //Getters
     double get_base_radius();
     double get_height();

     void set_base_radius(double radius_param);
     void set_height(double height_param);
};
#endif