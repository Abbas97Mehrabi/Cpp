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
      }
};

#endif
