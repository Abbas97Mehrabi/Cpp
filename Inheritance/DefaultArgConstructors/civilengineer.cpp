#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>
using namespace std;

CivilEngineer::CivilEngineer(){
      cout << "Default constructor called for CivilEngineer ..." << endl;
}

CivilEngineer::~CivilEngineer()
{
}

ostream& operator<<(ostream& out, const CivilEngineer& operand){
      out << "CivilEngineer [Full name : " << operand.get_full_name() <<
            ",age : " << operand.get_age() << 
            ",address : " << operand.get_address() <<
            ",contract_count : " << operand.get_contract_count() <<
            ",speciality : " << operand.m_speciality << "]";

      return out;
} 