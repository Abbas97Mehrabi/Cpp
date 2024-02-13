#include <iostream>


int main(){

     char character1 {'a'};
     char character2 {'b'};
     char character3 {'b'};
     char character4 {'a'};
     char character5 {'s'};

     std::cout << character1 << std::endl;
     std::cout << character2 << std::endl;
     std::cout << character3 << std::endl;
     std::cout << character4 << std::endl;
     std::cout << character5 << std::endl;
     

     // One byte in memory : 2^8 = 256 different values (0 ~ 255)
     std::cout << std::endl;

     char value = 65; // ASCII character code for 'A'
     std::cout << "Value : " << value << std::endl; // A
     std::cout << "Value (int) : " << static_cast<int>(value) << std::endl;

     std::cout << std::endl;

     auto var1 {12};
     auto var2 {13.0};
     auto var3 {14.0f};
     auto var4 {15.0l};
     auto var5 {'e'};

     //int modifier suffixes
     auto var6 {123u}; // unsigned
     auto var7 {123ul}; // unsigned long
     auto var8 {123ll}; // long long

     std::cout << "var1 occupies : " << sizeof(var1) << " Bytes" << std::endl;
     std::cout << "var2 occupies : " << sizeof(var2) << " Bytes" << std::endl;
     std::cout << "var3 occupies : " << sizeof(var3) << " Bytes" << std::endl;
     std::cout << "var4 occupies : " << sizeof(var4) << " Bytes" << std::endl;
     std::cout << "var5 occupies : " << sizeof(var5) << " Bytes" << std::endl;
     std::cout << "var6 occupies : " << sizeof(var6) << " Bytes" << std::endl;
     std::cout << "var7 occupies : " << sizeof(var7) << " Bytes" << std::endl;
     std::cout << "var8 occupies : " << sizeof(var8) << " Bytes" << std::endl;

     return 0;
     
}