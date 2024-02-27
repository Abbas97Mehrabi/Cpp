#include <iostream>
#include "compare.h"



int main(){

     int maximum = max(23,32);
     std::cout << "Maximum : " << maximum << std::endl;

     int minimum = min(23,32);
     std::cout << "Minimum : " << minimum << std::endl;
     int result = inc_mult(4,7);
     std::cout << "Result : " << result << std::endl;
     return 0;
     
}
