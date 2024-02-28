#include <iostream>


int main(){
     /*
     auto func = [](){ // Lambda function
          std::cout << "Hello World!" << std::endl;
     };
     func();*/
     /*
     [](){ //Directly called lumbda function
          std::cout << "Hello World!" << std::endl;
     }();
     std::cout << "Done!" << std::endl;*/
     /*
     [](double a, double b){ // lumbda function with parameter
          std::cout << "a + b : " << (a+b) << std::endl;
     }(13.0, 15.0);
     std::cout << "Done!" << std::endl;*/
     /*
     auto func1 = [](double a, double b){ // lumbda function with parameter Directly
          std::cout << "a + b : " << (a+b) << std::endl;
     };
     func1(13.01, 17.3);
     func1(1,4);*/
     /*
     auto result = [](double a, double b){ // lumbda function that return value
          return a + b;
     }(45,23);
     //std::cout << "result : " << result << std::endl;
     std::cout << "result : " << [](double a, double b){ // lumbda function that return value
          return a + b;
     }(45,23) << std::endl;*/
     /*
     auto func3 = [](double a, double b)-> int{ // Explicitly specify the return type
          return a + b;
     };
     auto func4 = [](double a, double b){ // Explicitly specify the return type
          return a + b;
     };
     double a{12.2};
     double b{11.4};

     std::cout << "int return func : " << func3(a,b) << std::endl;
     std::cout << "double return func : " << func4(a,b) << std::endl;*/

     //Capture lists
     /*double a{12.2};
     double b{11.4};
     auto func4 = [a,b](){ 
          std::cout << "a + b : " << (a+b) << std::endl;
     };
     func4();*/

     //Capturing by value
     /*int c {24};

     auto func5 = [c](){ 
          std::cout << "Inner value : " << c << "&Inner" << &c << std::endl;
     };
     for (size_t i = 0; i < 5; i++)
     {
          std::cout << "Outer value : " << c << "&Outer" << &c << std::endl;
          func5();
          c++;
     }*/
     //Capturing by references
     /*int c {24};

     auto func5 = [&c](){ 
          std::cout << "Inner value : " << c << " &Inner" << &c << std::endl;
     };
     for (size_t i = 0; i < 5; i++)
     {
          std::cout << "Outer value : " << c << " &Outer" << &c << std::endl;
          func5();
          c++;
     }*/

     //Capturing everything by value
     /*int c {24};

     auto func5 = [=](){ 
          std::cout << "Inner value : " << c << std::endl;
     };
     for (size_t i = 0; i < 5; i++)
     {
          std::cout << "Outer value : " << c << std::endl;
          func5();
          c++;
     }*/

     //Capturing everything by references
     int c {24};
     int d{7};
     auto func5 = [&](){ 
          std::cout << "Inner value : " << c << std::endl;
          std::cout << "Inner value(d) : " << d << std::endl;
     };
     for (size_t i = 0; i < 5; i++)
     {
          std::cout << "Outer value : " << c << std::endl;
          func5();
          c++;
          d++;
     }
     
     std::cout << "Done!" << std::endl;
     return 0;
}