#ifndef DERIVED_H
#define DERIVED_H
#include "base.h"

class Derived : public Base
{
public:
    Derived();
    virtual ~Derived();
    
    virtual void setup() override {
        std::cout << "Derived::setup() called" << std::endl;
        m_value = 100;
    }
    virtual void clean_up() override {
        std::cout << "Derived::clean_up() called" << std::endl;
    }

};

#endif // DERIVED_H