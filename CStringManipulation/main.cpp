#include <iostream>
#include <cstring>

int main(){
     /*
     const char message1[] {"The sky is blue."};
     const char* message2 {"The sky is blue."};
     std::cout << "Message1 : " << message1 << std::endl;

     //strlen ignore null character
     std::cout << "strlen(message1) : " << std::strlen(message1) << std::endl;
     //Includes the null character
     std::cout << "sizeof(message1) : " << sizeof(message1) << std::endl;

     std::cout << "strlen(message2) : " << std::strlen(message2) << std::endl;
     //Points size of pointers
     std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;*/
     /*
     std::cout << std::endl;
     std::cout << "std::strcmp : " << std::endl;
     const char* string_data1{"Alabama"};
     const char* string_data2{"Blabama"};

     char string_data3[]{"Alabama"};
     char string_data4[]{"Blabama"};

     //print the comparison
     std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
      << std::strcmp(string_data1, string_data2) << std::endl;

      std::cout << "std::strcmp (" << string_data3 << "," << string_data4 << ") : "
      << std::strcmp(string_data3, string_data4) << std::endl;

     string_data1 = "Alabama";
     string_data2 = "Alabamb";
     std::cout << "std::strcmp (" << string_data1 << "," << string_data2 << ") : "
      << std::strcmp(string_data1, string_data2) << std::endl;*/
     
     /*
     const char* string_data1{"Alabama"};
     const char* string_data2{"Blabama"};
     size_t n{3};
     std::cout << std::endl;
     std::cout << "std::strncmp : " << std::endl;

     std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
      << std::strncmp(string_data1, string_data2, n) << std::endl;

      string_data1 = "aaaia";
      string_data2 = "aaance";

      std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
      << std::strncmp(string_data1, string_data2, n) << std::endl;

      n = 5;

      std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
      << std::strncmp(string_data1, string_data2,n) << std::endl;

      string_data1 = "aaaoa";
      string_data2 = "aaance";

      std::cout << "std::strncmp (" << string_data1 << "," << string_data2 << "," << n << ") : "
      << std::strncmp(string_data1, string_data2, n) << std::endl;
     */
    //search for character
    /*
     std::cout << std::endl;
     std::cout << "std::strchr : " << std::endl;
     
     const char *str {"Try not. Do, or do not. There is no try."};

     char target = 'T';
     const char *result = str;
     int iteration{};

     while ((result = std::strchr(result, target)) != nullptr)
     {
          std::cout << "Found '" << target << "' starting at '" << result << "'\n";

          ++result;
          ++iteration;
     }
     std::cout << "iteration : " << iteration << std::endl;*/

     //this one has a bug and printing 25 time
     /*
     const char *str {"Try not. Do, or do not. There is no try."};

     char target = 'T';
     const char *result{nullptr};
     int iteration{};

     while ((result = std::strchr(str, target)) != nullptr)
     {
          std::cout << "Found '" << target << "' starting at '" << result << "'\n";

          ++str;
          ++iteration;
     }
     std::cout << "iteration : " << iteration << std::endl;*/

     std::cout << std::endl;
     std::cout << "std::strrchr : " << std::endl;

     char input[] = "/home/user/hello.cpp";
     char* output = std::strrchr(input, '/');
     if (output)
     {
          std::cout << output+1 << std::endl;
     }
     
     
     return 0;
     
}