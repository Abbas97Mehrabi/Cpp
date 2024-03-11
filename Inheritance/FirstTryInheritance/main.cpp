#include <iostream>
#include "player.cpp"
#include "person.cpp"

int main(){
     
     Player p1{"Basketball"};
     p1.set_first_name("Abbas");
     p1.set_last_name("Mehrabi");
     std::cout << "Player : " << p1 << std::endl;

     return 0;
     
}