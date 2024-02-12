#include <iostream>


int main(){

     signed int value1 {10};
     signed int value2 {-300};

     std::cout << "Value1 : " << value1 << std::endl;
     std::cout << "Value2 : " << value2 << std::endl;
     std::cout << "Size of value1 : " << sizeof(value1) << std::endl;
     std::cout << "Size of value2 : " << sizeof(value2) << std::endl;

     unsigned int value3 {4};
     // unsigned int value4 {-5}; // Compile error.

     // short and long
     short short_var {-32768}; // 2 Bytes
     short int short_int {455};
     signed short signed_shoet {122};
     signed short int signed_short_int {-456};
     unsigned short int unsigned_short_int {456};

     int int_var {55}; // 4 Bytes
     signed signed_var {77};
     signed int signed_int {88};
     unsigned int unsigned_int {88};

     long long_var {99}; // 4 or 8 Bytes
     long int long_int {33};
     signed long signed_long {22};
     signed long int signed_long_int {11};
     unsigned long int unsigned_long_int {25};

     long long long_long {777}; // 8 Bytes
     long long int long_long_int {666};
     signed long long signed_long_long {333};
     signed long long int signed_long_long_int {3214};
     unsigned long long int unsigned_long_long_int {4321};

     std::cout << "Long long : " << long_long << " , size : " 
     << sizeof(long_long) << " bytes" << std::endl;

     std::cout << "Long long int : " << long_long_int << " , size : " 
     << sizeof(long_long_int) << " bytes" << std::endl;

     std::cout << "Signed long long : " << signed_long_long << " , size : " 
     << sizeof(signed_long_long) << " bytes" << std::endl;

     std::cout << "Signed long long int : " << signed_long_long_int << " , size : " 
     << sizeof(signed_long_long_int) << " bytes" << std::endl;

     std::cout << "Unsigned long long int : " << unsigned_long_long_int << " , size : " 
     << sizeof(unsigned_long_long_int) << " bytes" << std::endl;


     

     return 0;
     
}