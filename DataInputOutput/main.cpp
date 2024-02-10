#include <iostream>
#include <string>


int main(){
     /*
     int age;
     std::string name;
     
     //output
     std::cout << "Please insert your name : " << std::endl;
     //input
     std::cin >> name;

     std::cout << "Please insert your age : " << std::endl;
     std::cin >> age;

     std::cout << "Hello " << name << "! You are" << age << " years old" << std::endl;
     //error message output
     std::cerr << "Error message : something went wrong!" << std::endl;
     //log message out put
     std::clog << "Log message : loggin into program" << std::endl;

     std::cout << "Insert your name, and your age" << std::endl;
     //multipule inputs in a row
     std::cin >> name >> age;
     
     std::cout << "Hello " << name << " You are " << age << " years old!" << std::endl;
     */
     std::cout << "Insert your fullname, and your age" << std::endl;
     
     int age1;
     std::string fullname;
     //Data with spaces
     std::getline(std::cin,fullname);

     std::cin >> age1;

     std::cout << "Hello " << fullname << " You are " << age1 << " years old!" << std::endl;




     return 0;
     
}