#include "oval.h"
using namespace std;

Oval::Oval(double x_radios, double y_radios, string_view description)
    : Shape(description),m_x_radios(x_radios),m_y_radios(y_radios)
{

}

Oval::~Oval()
{

}