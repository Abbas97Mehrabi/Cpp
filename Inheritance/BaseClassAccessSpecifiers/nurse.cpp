#include "person.h"
#include "nurse.h"
#include <iostream>
#include <string>

Nurse::Nurse(){

}
ostream& operator<<(ostream& out, const Nurse& operand){
      out << "Nurse [Full name : " << operand.get_fullname() <<
            ",age : " << operand.get_age() << 
            ",address : " << operand.get_address() << 
            ",Practice certificate id : " << operand.practice_sertificate_id << "]";
      
      return out;
}
Nurse::~Nurse(){

}