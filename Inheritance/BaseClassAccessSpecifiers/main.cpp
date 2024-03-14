#include <iostream>
#include "person.cpp"
#include "player.cpp"
#include "nurse.cpp"

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


     return 0;
     
}