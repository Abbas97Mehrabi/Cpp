#include <iostream>
using namespace std; //using standard library to avoid using std befor everything 
int main(){
     /*
     cout << "std::isalnum : " << endl;

     cout << "C is alphanumeric : " << isalnum('C') << endl;
     cout << "^ is alphanumeric : " << isalnum('^') << endl;

     char input_char{'*'};
     if(isalnum(input_char)){
          cout << input_char <<  " is alphanumeric." << endl;
     }else{
          cout << input_char <<  " is not alphanumeric." << endl;
     }*/

     cout << "std::isalpha : " << endl;

     cout << "C is alphabetic : " << isalpha('C') << endl;
     cout << "^ is alphabetic : " << isalpha('^') << endl;
     cout << "7 is alphabetic : " << isalpha('7') << endl;

     if(isalpha('e')){
          cout << 'e' <<  " is alphabetic." << endl;
     }else{
          cout << 'e' <<  " is not alphabetic." << endl;
     }

     

     return 0;
     
}