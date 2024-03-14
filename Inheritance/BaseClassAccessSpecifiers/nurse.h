#ifndef NURSE_H
#define NURSE_H

#include "person.h"
using namespace std;

class Nurse : protected Person
{
      friend ostream& operator<<(ostream& out, const Nurse& operand);
private:
      int practice_sertificate_id{0}; 
public:
      Nurse();
      ~Nurse();
      void treat_unwell_person(){
            m_fullname = "Mahmud";
            m_age = 19;
            //m_address = "Shanli urfa"; // Compiler error
      }
};

#endif
