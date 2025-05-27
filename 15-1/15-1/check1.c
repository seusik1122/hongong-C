#include <stdio.h>

int main(void)
{
	double grade = 4.5;
	double* pa = &grade;
	double** ppa = &pa;

	printf("%u\n", ppa);

	return 0;
}