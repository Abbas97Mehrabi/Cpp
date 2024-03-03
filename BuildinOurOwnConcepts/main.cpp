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
/*template <typename T>
concept Multipliable = requires(T a, T b){
     a * b; 
};

template <typename T>
concept Incrementable = requires(T a){
     a+=1;
     ++a;
     a++;
};

//Using it
template <typename T>
requires Incrementable<T>
T add(T a, T b){
     return a + b;
}*/

template <typename T>
concept TinyType = requires(T t){
     sizeof(T) <= 4; // Simple requirement : only enforces syntax
     requires sizeof(T) <= 4; // Nested requirements
};

//Compound requirement
template <typename T>
concept Addable = requires (T a, T b){
     {a + b} noexcept -> convertible_to<int>;
};

/*template <typename T>
//requires integral<T> || floating_point<T>
requires integral<T> && TinyType<T>
T add(T a,T b){
     return a + b;
}*/

integral auto add (integral auto a, integral auto b){
     return a + b;
}


int main(){

     int a{12};
     int b{13};

     //string a{"salam"};
     //string b{"donya"};

     auto result = add(a, b);
     cout << "Result is : " << result << endl;
     cout << "sizeof(result) is : " << sizeof(result) << endl;

     return 0;
     
}