#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"
#include <string.h>
#include <string_view>
using namespace std;
class CivilEngineer : public Engineer
{
      friend ostream& operator<<(ostream&, const CivilEngineer& operand);
private:
      string m_speciality{"None"};
public:
      CivilEngineer();
      ~CivilEngineer();
      void build_road(){
            //get_full_name(); //compile error
            //m_full_name = "Mohammad Talha Mehrabi"; //compiler error
            //m_age = 26; //compiler error
            
            add(10,2);
            add(10,2,4);
      }
};

#endif
