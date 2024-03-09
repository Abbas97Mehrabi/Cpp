#include <iostream>
using namespace std;


class Dog
{
     public:
          string m_name;
};

struct Cat
{
     string m_name;
};
struct Point
{
     double x;
     double y;
};
void print_point(const Point& point){
     cout << "Point [ x: " << point.x << ", Y: " << point.y << "]" << endl;
}



int main(){

     Dog dog1;
     Cat cat1;

     dog1.m_name = "Fluffy"; //Compiler error
     cout << dog1.m_name << endl;

     cat1.m_name = "Johnny";
     cout << cat1.m_name << endl;

     Point point1;
     point1.x = 12.1;
     point1.y = 2.3;
     print_point(point1);

     point1.x = 1.1;
     point1.y = 7.3;
     print_point(point1);

     return 0;
     
}