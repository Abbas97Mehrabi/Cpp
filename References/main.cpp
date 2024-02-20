#include <iostream>

int main(){
     
     int int_data{22};
     double double_data{44};

     //References
     int& ref_int_data{int_data};
     double& ref_double_data{double_data};
     
     std::cout << "int data : " << int_data << std::endl;
     std::cout << "&int data : " << &int_data << std::endl;
     std::cout << "double data : " << double_data << std::endl;
     std::cout << "&double data : " << &double_data << std::endl;


     std::cout << "Ref int data : " << ref_int_data << std::endl;
     std::cout << "&ref int data : " << &ref_int_data << std::endl;
     std::cout << "Ref double data : " << ref_double_data << std::endl;
     std::cout << "&ref double data : " << &ref_double_data << std::endl;

     std::cout << "================================== " << std::endl;

     int_data = 222;
     double_data = 76.4;

     std::cout << "int data : " << int_data << std::endl;
     std::cout << "&int data : " << &int_data << std::endl;
     std::cout << "double data : " << double_data << std::endl;
     std::cout << "&double data : " << &double_data << std::endl;


     std::cout << "Ref int data : " << ref_int_data << std::endl;
     std::cout << "&ref int data : " << &ref_int_data << std::endl;
     std::cout << "Ref double data : " << ref_double_data << std::endl;
     std::cout << "&ref double data : " << &ref_double_data << std::endl;

     std::cout << "================================== " << std::endl;

     ref_int_data = 1376;
     ref_double_data = 2000.12;

     std::cout << "int data : " << int_data << std::endl;
     std::cout << "&int data : " << &int_data << std::endl;
     std::cout << "double data : " << double_data << std::endl;
     std::cout << "&double data : " << &double_data << std::endl;


     std::cout << "Ref int data : " << ref_int_data << std::endl;
     std::cout << "&ref int data : " << &ref_int_data << std::endl;
     std::cout << "Ref double data : " << ref_double_data << std::endl;
     std::cout << "&ref double data : " << &ref_double_data << std::endl;

     
     return 0;
     
}