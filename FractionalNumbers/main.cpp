#include <iostream>
#include <iomanip>

int main(){

     float number1 {1.12345678998765432100f};
     double number2 {1.12345678998765432100};
     long double number3 {1.12345678998765432100L};

     std::cout << "size of float : " << sizeof(number1) << std::endl;
     std::cout << "size of double : " << sizeof(number2) << std::endl;
     std::cout << "size of long double : " << sizeof(number3) << std::endl;

     // precision
     std::cout << std::setprecision(20); // control the precision from std::cout
     std::cout << "Number1 is : " << number1 << std::endl; // 7 Digits
     std::cout << "Number2 is : " << number2 << std::endl; // 15 Digits
     std::cout << "Number3 is : " << number3 << std::endl; // 15+ Digits

     //Float problems : the precision is too limited
     //for a lot of applications
     float number4 = 192400023.0f; // Error : narrowing conversion

     std::cout << "Number4 : " << number4 << std::endl;

     //Scientific notation
     std::cout << std::endl;
     std::cout << "Scientific notation" << std::endl;

     double number5 {192400023};
     double number6 {1.92400023e8};
     double number7 {1.924e8};

     double number8 {0.00000000003498};
     double number9 {3.498e-11}; // multiply with 10 exp(-11)

     std::cout << "Number5 is : " << number5 << std::endl;
     std::cout << "Number6 is : " << number6 << std::endl;
     std::cout << "Number7 is : " << number7 << std::endl;
     std::cout << "Number8 is : " << number8 << std::endl;
     std::cout << "Number9 is : " << number9 << std::endl;
     

     // Infinity and Nan
     std::cout << std::endl;
     std::cout << "Infinity and Nan" << std::endl;

     double number10 {-5.6};
     double number11 {};
     double number12 {};

     // Infinity
     double result {number10 / number11};

     std::cout << number10 << " / " << number11 << " yields " << result << std::endl;
     std::cout << result << " + " << number10 << " yields " << result + number10 << std::endl;

     //Nan
     result = number11 / number12;
     std::cout << number11 << " / " << number12 << " = " <<  result << std::endl;

     return 0;
     
}