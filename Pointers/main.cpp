#include <iostream>


int main(){
     //int pointers
     //size of pointers is 8 bytes
     /*
     int int_var {43};
     int* p_int{&int_var};
     std::cout << "Int var : " << int_var << std::endl;
     std::cout << "P_int (address in memory) : " << p_int << std::endl;

     int int_var1 {43};
     int* p_int1{&int_var1};
     std::cout << "P_int (address in memory) : " << p_int1 << std::endl;

     //Derefrencing a pointer
     int* p_int2 {nullptr};
     int int_data {26};
     p_int2 = &int_data;
     std::cout << "Value : " << *p_int2 << std::endl;
     */
     //Pointer to char 
     const char * message{"Hello World!"};
     std::cout << "Message : " << message << std::endl;
     std::cout << "*Message : " << *message << std::endl;//print only H

     

     return 0;
     
}