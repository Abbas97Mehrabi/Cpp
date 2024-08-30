#include <iostream>
#include <memory>
#include "stream_insertable.h"
#include "animal.h"
#include "feline.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "pigeon.h"
#include "crow.h"
using namespace std;

class Point : public StreamInsertable
{
private:
    double m_x;
    double m_y;
public:
    Point() = default;
    Point(double x, double y): m_x(x), m_y(y){

    }
    virtual void stream_insert(std::ostream& out)const override{
        out << "Point [x: " << m_x << ", y: " << m_y << "]";
    }
};


int main(){
    
    Point p1(10,20);
    std::cout << "p1 : " << p1 << std::endl;
    //operator<<(cout,p1);

    cout << "-------------------------------" << endl;

    unique_ptr<Animal> animal0 = make_unique<Dog>("stripes","dog1");
    cout << *animal0 << endl;

    unique_ptr<Animal> animal1 = make_unique<Bird>("White","bird1");
    cout << *animal1 << endl;

    cout << "-------------------------------" << endl;

     std::shared_ptr<Animal> animals[] {
        std::make_shared<Dog>("stripes","dog2"),
        std::make_shared<Cat>("black stripes","cat2"),
        std::make_shared<Crow>("black wings","crow2"),
        std::make_shared<Pigeon>("white wings","pigeon2")
    };
	std::cout << std::endl;
    std::cout << "Printing out animals array : " << std::endl;
    for(const auto& a : animals){
        std::cout << *a << std::endl;
    }
    return 0;
}    



