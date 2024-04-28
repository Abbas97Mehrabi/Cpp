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
      CivilEngineer(string_view fullname, int age,
       string_view address,int contract_count, string_view speciality);
       CivilEngineer(const CivilEngineer& source);
      ~CivilEngineer();
      void build_road(){
      }
};

#endif
