#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 
#pragma warning(disable:4996)

int main(void)
{
	char str[80];
	int num = 0;

	printf("���� �Է� : ");
	gets(str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
			num++;
		}
	}

	printf("�ٲ� ���� : %s\n", str);
	printf("�ٲ� ���� �� : %d", num);

	return 0;
}