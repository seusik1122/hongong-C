#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996)

int main(void)
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;
}