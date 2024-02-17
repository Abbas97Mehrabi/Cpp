#include <iostream>
#include <cmath>
int main(){
     
     int scores [10];
     /*
     std::cout << "Reading out score values (manually) " << std::endl;
     std::cout << "Scores[0] : "  << scores[0] << std::endl;
     std::cout << "Scores[1] : "  << scores[1] << std::endl;

     std::cout << "Scores[9] : "  << scores[9] << std::endl;

     std::cout << "Reading out score values (with loop) " << std::endl;
     for (size_t i = 0; i < 10; i++)
     {
          std::cout << "Scores[" << i << "] "  << scores[i] << std::endl;
     }*/
     /*
     scores[0] = 20;
     scores[1] = 21;
     scores[2] = 22;
     for (size_t i = 0; i < 10; i++)
     {
          std::cout << "Scores[" << i << "] "  << scores[i] << std::endl;
     }*/
     // write data in a loop
     /*
     for (size_t i = 0; i < 10; i++)
     {
          scores[i] = pow(i,2);
     }
     for (size_t i = 0; i < 10; i++)
     {
          std::cout << "Scores[" << i << "] : "  << scores[i] << std::endl;
     }*/
     //declare and initialize at the same time
     /*
     double maas[5] = {1.8, 2.2, 2.8, 3.3, 4.5};
     for (size_t i = 0; i < 5; i++)
     {
          std::cout << "Maas[" << i << "] : "  << maas[i] << std::endl;
     }*/
     //omit the size of the array at declaration
     //int stdudent_count[] {12, 14, 16, 19, 26, 27}; 
     /*
     for (auto value:stdudent_count)
     {  
          std::cout << "Class : "  << value << std::endl;  
     }*/
     /*
     int sum{};
     for (int element: stdudent_count)
     {
          sum += element;
     }
     std::cout << "Classes sum : " << sum << std::endl;
     */
    /*
    int count = std::size(stdudent_count); // std::size(C++17)
    int j{1};
    for (size_t i = 0; i < count; i++)
    {
     std::cout << "Class[" << j << "] : "  << stdudent_count[i] << std::endl;
     j++;
    }*/
    //declare  character array
    char message [5] {'H', 'e', 'l', 'l', 'o'};
    /*
    std::cout << "Message : ";
    for (auto c : message)
    {
          std::cout << c;
    }
    std::cout << std::endl;
    //change character in our array
    message[1] = 'a';
    std::cout << "Message : ";
    for (auto c : message)
    {
          std::cout << c;
    }
     std::cout << std::endl;*/
     /*
     std::cout << "Message : " << message << std::endl;

     char message1[] {'H', 'e', 'l', 'l', 'o'};
     std::cout << "Message1 : " << message1 << std::endl;*/

     //string literal
     char message4 [] {"Hello"};
     std::cout << "Message4 : " << message4 << std::endl;
    
    
     
     
     
 
     return 0;
     
}