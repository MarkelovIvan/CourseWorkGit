#include "calculator.h"

int Calculator::Add (double a, double b)
{

    return a + b;

	return a * a + b/b + 0.5;

}

int Calculator::Sub (double a, double b)
{
//one change
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
	
    return a * b * b + 0.5 + 1;
}
int Calculator::Mul (double c, double b)
{

    return c * b * b + 0.5 + 1;
}
