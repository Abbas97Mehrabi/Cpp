#include <iostream>
#include <cmath>


int main(){
double weight { 7.7 };
     //floor
     std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl;
     //ceil
     std::cout << "Weight rounded to ceil is : " << std::ceil(weight) << std::endl;
     //abs
     double saving {-5000 };
     std::cout << "Abs of weight : " << std::abs(weight) << std::endl;
     std::cout << "Abs of saving : " << std::abs(saving) << std::endl;
     
     //exp : f(x) = e ^ x, where e = 2.71828
     double exponential = std::exp(10);
     std::cout << "The exponential of 10 is : " << exponential << std::endl;

     //pow
     std::cout << "3 ^ 4 is : " << std::pow(3,4) << std::endl;
     std::cout << "9 ^ 3 is : " << std::pow(9,3) << std::endl;

     //log
     std::cout << "Log ; to get 54.59, you would elevate e to the power of : " 
     << std::log(54.59) << std::endl;
     std::cout << "to get 1000, you would need elevate 10 to the power of : " 
     << std::log10(10000) << std::endl;

     //sqrt
     std::cout << "The square root of 81 is : " << std::sqrt(81) << std::endl;

     //round
     std::cout << "3.654 rounded to : " << std::round(3.654) << std::endl;
     std::cout << "2.5 rounded to : " << std::round(2.5) << std::endl;
     std::cout << "2.3 rounded to : " << std::round(2.3) << std::endl;

     return 0;
     
}