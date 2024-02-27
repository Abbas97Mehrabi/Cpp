#include <iostream>

void say_age(int& age);
int main(){
     
     int age{25};
     std::cout << "age (befor call) " << age << " &age : " << &age << std::endl;
     say_age(age);
     std::cout << "age (after call) " << age << " &age : " << &age << std::endl;

     return 0;
     
}
void say_age(int& age){
      ++age;
      std::cout << "Hello, you are " << age << " years old! &age : " << &age << std::endl; 
}