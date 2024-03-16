#include <iostream>
#include "person.cpp"
#include "player.cpp"
#include "nurse.cpp"
#include "engineer.cpp"

int main(){
     
     Person p1{"Abbas Mehrabi", 26, "Yomra Trabzon"};
     std::cout << "Person 1 : " << p1 << std::endl;

     std::cout << "---------" << std::endl;

     Player player;
     player.m_fullname = "Mahnud";
     //player.m_age = 19; // Compiler erro
     
     std::cout << "---------" << std::endl;

     Nurse nurse1;
     //nurse1.m_fullname = "Mary"; // Compiler error
     std::cout << "Nurse 1 : " << nurse1 << std::endl;

     std::cout << "---------" << std::endl;
     Engineer engineer1;
     //engineer1.m_fullname = "Selman Kara"; // Compiler error
     //engineer1.m_age = 21; // Compiler error
     //engineer1.m_address = "Trabzon Akcaabat";

     return 0;
}