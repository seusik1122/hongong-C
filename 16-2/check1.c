#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[80];
	char* ps[4][5] = { 0 };
	char** matrix = &ps;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("문자열을 입력");
			gets(str);
			ps[i][j] = (char*)malloc(strlen(str) + 1);
			strcpy(ps[i][j], str);
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			free(ps[i][j]);
		}
	}

	return 0;
}