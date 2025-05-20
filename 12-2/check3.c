#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	int len;

	printf("단어 입력 : ");
	gets(str);
	len = strlen(str);

	printf("입력한 단어 : %s, ", str);

	if (len >= 5)
	{
		for (int i = 5; i < len; i++)
		{
			str[i] = '*';
		}
	}

	printf("생각한 단어 : %s", str);

	return 0;
}