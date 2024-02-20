#include <iostream>


int main(){
     //Declare
     double double_value{34.12};
     double& ref_double_value{double_value};
     double* p_double_value{&double_value};

     //Reading
     std::cout << "Double value : " << double_value << std::endl;
     std::cout << "Ref double value : " << ref_double_value << std::endl;
     std::cout << "p_double value : " << p_double_value << std::endl;
     std::cout << "*p_double value : " << *p_double_value << std::endl;

     //Writing through pointer
     *p_double_value = 16.33;
     std::cout << std::endl;
     std::cout << "Double value : " << double_value << std::endl;
     std::cout << "Ref double value : " << ref_double_value << std::endl;
     std::cout << "p_double value : " << p_double_value << std::endl;
     std::cout << "*p_double value : " << *p_double_value << std::endl;
     
     //Writing trough reference
     ref_double_value = 44.18;
     std::cout << std::endl;
     std::cout << "Double value : " << double_value << std::endl;
     std::cout << "Ref double value : " << ref_double_value << std::endl;
     std::cout << "p_double value : " << p_double_value << std::endl;
     std::cout << "*p_double value : " << *p_double_value << std::endl;

     double other_double_value{45.87};
     ref_double_value = other_double_value;

     std::cout << std::endl;
     std::cout << "Making reference referencing something else ... " <<  std::endl;
     std::cout << "Double value : " << double_value << std::endl;
     std::cout << "Ref double value : " << ref_double_value << std::endl;
     std::cout << "p_double value : " << p_double_value << std::endl;
     std::cout << "*p_double value : " << *p_double_value << std::endl;

     p_double_value = &other_double_value;
     std::cout << std::endl;
     std::cout << "Making Pointer point some other value ... " <<  std::endl;
     std::cout << "Double value : " << double_value << std::endl;
     std::cout << "Ref double value : " << ref_double_value << std::endl;
     std::cout << "&double value : " << &double_value << std::endl;
     std::cout << "&ref double value : " << &ref_double_value << std::endl;
     std::cout << "p_double value : " << p_double_value << std::endl;
     std::cout << "*p_double value : " << *p_double_value << std::endl;

     *p_double_value = 66.6;
     
     std::cout << std::endl;
     std::cout << "Making Pointer point some other value ... " <<  std::endl;
     std::cout << "Double value : " << double_value << std::endl;
     std::cout << "Ref double value : " << ref_double_value << std::endl;
     std::cout << "&double value : " << &double_value << std::endl;
     std::cout << "&ref double value : " << &ref_double_value << std::endl;
     std::cout << "p_double value : " << p_double_value << std::endl;
     std::cout << "*p_double value : " << *p_double_value << std::endl;
     return 0;
     
}