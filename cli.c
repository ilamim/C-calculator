#include "calculator.h"

extern double x;
extern double y;
extern char a;
extern double res;
extern double (*fct)(double, double);

void cli(void)
{
    ask_operation();
    printf("Selected operation: %c\n", a);
    printf("Please enter a number:\n");
    scanf("%lf", &x);
    printf("Please enter a second number:\n");
    scanf("%lf", &y);
}


void ask_operation(void)
{
    printf("Please select an operation [ +, -, x or / ] or press 'q' to quit:\n");
    scanf("%s", &a);
    select_operation();
}


void select_operation(void)
{
    switch (a)
	{
	case '+':
		fct = addition;
		break;
	case '-':
		fct = subtraction;
		break;
	case 'x':
    case '*':
		fct = multiplication;
		break;
	case '/':
		fct = division;
		break;
    case 'q':
    case 'Q':
        exit(EXIT_SUCCESS);
	default:
		printf("Operation error. Please try again. \n");
		ask_operation();
        break;
	}
}


void calculator(double x, double y, double (*fct)(double, double))
{
    res = fct(x, y);
    printf("Result: %lf %c %lf = %lf\n", x, a, y, res);
}