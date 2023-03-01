#include <stdio.h>
#include <stdlib.h>

double addition(double x, double y);
double subtraction(double x, double y);
double multiplication(double x, double y);
double division(double x, double y);
void cli(void);
void ask_operation(void);
void select_operation(void);
void calculator(double x, double y, double (*fct)(double, double));

