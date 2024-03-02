#include <iostream>
#include <string>

template <typename T> T maximum(T a, T b);
template <typename T> T multiply(T a, T b);
int main(){

     int a{10};
     int b{21};

     double c{43.1};
     double d{64.1};

     std::string e {"hello"};
     std::string f {"world"};

     std::cout << "int maximum : " << maximum(a, b) << std::endl;
     std::cout << "double maximum : " << maximum(c, d) << std::endl;
     std::cout << "string maximum : " << maximum(e, f) << std::endl;
     std::cout << std::endl;
     std::cout << "int multiply : " << multiply(a, b) << std::endl;
     std::cout << "double multiply : " << multiply(c, d) << std::endl;

     //Explicit template arguments
     auto max = maximum<double>(a,d);
     std::cout << "max : " << max << std::endl;



     return 0;
     
}

template <typename T> T maximum(T a, T b){
     return (a>b) ? a : b;
}

template <typename T> T multiply(T a, T b){
     return (a*b);
}