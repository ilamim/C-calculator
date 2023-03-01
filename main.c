#include "calculator.h"

double x;
double y;
char a;
double res;
double (*fct)(double, double);


int main()
{
    while (1)
    {
        cli();
        calculator(x, y, fct);
    }
    return 0;
}