#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	int len;

	printf("�ܾ� �Է� : ");
	gets(str);
	len = strlen(str);

	printf("�Է��� �ܾ� : %s, ", str);

	if (len >= 5)
	{
		for (int i = 5; i < len; i++)
		{
			str[i] = '*';
		}
	}

	printf("������ �ܾ� : %s", str);

	return 0;
}