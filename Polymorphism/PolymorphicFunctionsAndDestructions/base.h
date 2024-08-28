#ifndef BASE_H
#define BASE_H
#include <iostream>
class Base
{
public:
    Base();
    virtual ~Base();
    virtual void setup(){
        std::cout << "Base::setup() called" << std::endl;
        m_value = 10;
    }
    virtual void clean_up(){
        std::cout << "Base::clean_up() called" << std::endl;
    }
    int get_value(){
        return m_value;
    }
    protected:
        int m_value;
};

#endif // BASE_H