#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include <string_view>
#include "person.h"
using namespace std;

class Player : public Person
{
      friend ostream& operator<<(ostream& out, const Player& player);
private:
      int m_career_start_year{0};
      double m_salary{0.0};
      int health_factor{0};
public:
      Player();
      //see the access we have to inherited mambers from person
      void play(){
            m_fullname = "Mohammad Kadirov";
            //m_address = "Merkez Trabzon"; // Compiler error
            m_age = 22;
      };
};

#endif // PLAYER_H
