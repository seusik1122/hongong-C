#include <stdio.h>
#include <string.h>

void swap(char* type, void* pa, void* pb)
{
	if (strcmp(type, "int") == 0)
	{
		int pc = *(int*)pa;
		*(int*)pa = *(int*)pb;
		*(int*)pb = pc;
	}
	else if (strcmp(type, "double") == 0)
	{
		double pc = *(double*)pa;
		*(double*)pa = *(double*)pb;
		*(double*)pb = pc;
	}
}

int main(void)
{
	int age1, age2;
	double cm1, cm2;

	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &age1, &cm1);
	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &age2, &cm2);

	swap("int", &age1, &age2);
	swap("double", &cm1, &cm2);

	printf("첫 번째 사람의 나이와 키 : %d, %.1lf\n", age1, cm1);
	printf("두 번째 사람의 나이와 키 : %d, %.1lf", age2, cm2);

	return 0;
}