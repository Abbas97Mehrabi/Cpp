#include <iostream>
using namespace std;

class Dog
{
private:
     size_t leg_count; //8
     size_t arm_count; //8
     int *p_age; //8
public:
     Dog() = default;
     void print_info(){

     }
     void do_something(){

     }
     
};

int main(){

     Dog dog1;
     cout << "SizeOf(Size_t) : " << sizeof(size_t) << endl;
     cout << "SizeOf(int) : " << sizeof(int) << endl;
     cout << "SizeOf(Dog) : " << sizeof(Dog) << endl; 
     
     string name{"Hello Modern World!"};
     cout << "SizeOf(string) : " << sizeof(string) << endl; 

     return 0;
     
}