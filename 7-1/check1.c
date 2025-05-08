#include <stdio.h>

double average(double a, double b);

int main(void)
{
	double res;
	res = average(1.5, 3.4);
	printf("result : %.1lf", res);
}

double average(double a, double b)
{
	double temp;
	temp = a + b;
	return temp;
}