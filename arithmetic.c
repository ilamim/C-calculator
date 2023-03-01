#include "calculator.h"

double addition(double x, double y)
{
	return x + y;
}

double subtraction(double x, double y)
{
	return x - y;
}

double multiplication(double x, double y)
{
	return x * y;
}

double division(double x, double y)
{
	if (y == 0)
	{
		printf("Can't divide by zero.");
		return 0;
	}
	return x / y;
}
