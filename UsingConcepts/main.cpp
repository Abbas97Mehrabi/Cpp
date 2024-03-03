#include <iostream>
#include <concepts>
using namespace std;
//Syntax1
/*template <typename T>
requires integral<T>
T add(T a, T b){
     return a+b;
}*/
//Syntax2
/*template <integral T>
T add(T a, T b){
     return a+b;
}*/
//Syntax1
template <typename T>
T add(T a, T b) requires integral<T>{
     return a+b;
}
int main(){
     
     char a_0{10};
     char a_1{31};
     auto result_a = add(a_0, a_1);
     cout << "result_a : " << static_cast<int>(result_a) << endl;
     
     int b_0{41};
     int b_1{12};
     auto result_b = add(b_0, b_1);
     cout << "result_b : " << result_b << endl;
     /*
     double c_0{21.2};
     double c_1{12.1};
     auto result_c = add(c_0, c_1);
     cout << "result_c : " << result_c << endl;*/

     

     return 0;
     
}