#include <iostream> //already included <cctype> library 
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
     /*
     cout << "std::isalpha : " << endl;

     cout << "C is alphabetic : " << isalpha('C') << endl;
     cout << "^ is alphabetic : " << isalpha('^') << endl;
     cout << "7 is alphabetic : " << isalpha('7') << endl;

     if(isalpha('e')){
          cout << 'e' <<  " is alphabetic." << endl;
     }else{
          cout << 'e' <<  " is not alphabetic." << endl;
     }*/
     /*
     //Check if a character is blank
     cout << "std::isblank : " << endl;
     char message[] {"Hello there. How are you doing? The sun is shining."};
     cout << "Message : " << message << endl;

     int blank_count{};
     for (size_t i = 0; i < size(message); i++)
     {
          if(isblank(message[i])){
               cout << "Found a blank character at index : [" << i << "]" << endl;
               ++blank_count;
          }
     }
     cout << "In total we found : " << blank_count << " blank characters." << endl;*/
     /*
     //Check if character is lowercase or uppercase
     cout << "std::islower and std::isupper : " << endl;
     cout << endl;
     char thought[] {"The C# Programing Language is one of the most used on the Planet"};
     int lowercase_count{};
     int uppercase_count{};

     cout << "Original string : " << thought << endl;

     for (auto character : thought)
     {
          if(islower(character)){
               cout << " " << character;
               ++lowercase_count;
          }
          if(isupper(character)){
               ++uppercase_count;
          }
     }
     cout << endl;
     cout << "Found " << lowercase_count << " lowercase character and " << uppercase_count << 
     " uppercase characters." << endl;*/
     //Check if character is Digit
     /*
     cout << "std::isdigit : " << endl;
     char statement[] {"Mr Abbas owns 323 cows. That is a lot of cows! The kid exclamed."};
     cout << "Statement : " << statement << endl;

     int digit_count{};

     for (auto character : statement)
     {
          if(isdigit(character)){
               cout << "Found digit : " << character << endl;
               ++digit_count;
          }
     }
     cout << "Found " << digit_count << " digits in the statement string." << endl;*/

     //Turning a character to lowercase or uppercase
     cout << "std::islower and std::isupper : " << endl;
     cout << endl;
     char orginal_str[] {"Home the feeling of blonging"};
     char dest_str[size(orginal_str)];

     //Turn to upper
     for (size_t i = 0; i < size(orginal_str); i++)
     {
          dest_str[i] = toupper(orginal_str[i]);
     }
     cout << "The original string : " << orginal_str << endl;
     cout << "Uppercase string : " << dest_str << endl;

     //Turn to lowercase
     for (size_t i = 0; i < size(orginal_str); i++)
     {
          dest_str[i] = tolower(orginal_str[i]);
     }
     cout << "Lowercase string : " << dest_str << endl;
     

     return 0;
     
}