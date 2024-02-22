#include <iostream>
#include <cstring>


int main(){

     //concatenation
     /*
     std::cout << std::endl;
     std::cout << "std::strcat : " << std::endl;

     char dest[50] = "Hello ";
     char src[50] = "World!";

     std::strcat(dest, src);
     std::cout << "dest : " << dest << std::endl;
     std::strcat(dest, " Goodbye World!");
     std::cout << "dest : " << dest << std::endl;*/
     
     //more concatenation
     /*
     std::cout << std::endl;
     std::cout << "std::strcat : " << std::endl;

     char *dest1 = new char[30]{'f','i','r','e','l','o','r','d','\0'};
     char *source1 = new char[30]{',','T','h','e',' ','P','h','e','n','i','x',' ','K','i','n','g','!','\0'};

     std::cout << "std::strlen(dest1) : " << std::strlen(dest1) << std::endl;
     std::cout << "std::strlen(source1) : " << std::strlen(source1) << std::endl;
     std::cout << "Concatenating . . ." << std::endl;
     std::strcat(dest1, source1);

     std::cout << "std::strlen(dest1) : " << std::strlen(dest1) << std::endl;
     std::cout << "dest1 : " << dest1 << std::endl;*/
     /*
     std::cout << std::endl;
     std::cout << "std::strncat : " << std::endl;

     char dest2[50]{"Hello"};
     char source2[30] = " There is a bird on my window";

     std::cout << std::strncat(dest2,source2,6) << std::endl;

     std::strncat(dest2,source2,6);
     std::cout << "The concatenated string is : " << dest2 << std::endl;*/
     /*
     std::cout << std::endl;
     std::cout << "std::strcpy : " << std::endl;
     const char* sourse3 = "C++ is a multipurpose programming language.";
     char *dest3 = new char[std::strlen(sourse3) + 1];

     std::strcpy(dest3, sourse3);
     std::cout << "sizeof(dest3) : " << sizeof(dest3) << std::endl;
     std::cout << "std::strlen(dest3) : " << std::strlen(dest3) << std::endl;
     std::cout << "dest3 : " << dest3 << std::endl;*/

     std::cout << std::endl;
     std::cout << "std::strncpy : " << std::endl;

     const char* source4 = "Hello";
     char dest4[] = {'a','b','c','d','e','f','\0'};

     std::cout << "dest4 : " << dest4 << std::endl;
     
     std::cout << "Copying ... " << std::endl;
     std::strncpy(dest4,source4,5);
     std::cout << "dest4 : " << dest4 << std::endl;


     return 0;
     
}