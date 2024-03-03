#include <iostream>
#include <type_traits>
#include <concepts>
using namespace std;

//Syntax1 Bilding
/*template <typename T>
concept MyIntegral = is_integral_v<T>;
//Using it
template <typename T>
requires MyIntegral<T>
T add(T a, T b){
     return a + b;
}*/

//Syntax2 Building
template <typename T>
concept Multipliable = requires(T a, T b){
     a * b; 
};
//Using it
template <typename T>
requires Multipliable<T>
T add(T a, T b){
     return a + b;
}
int main(){

     double a{12.2};
     double b{13.1};

     auto result = add(a, b);
     cout << "Result is : " << result << endl;

     return 0;
     
}