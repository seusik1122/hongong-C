#include <stdio.h>

int main(void)
{
	int count;
	int temp = 0;
	int res;
	char ch;

	while (1)
	{
		count = 0;
		while (1)
		{
			res = scanf("%c", &ch);
			if (ch == '\n') break;
			count++;
		}
		if (count > temp) temp = count;
		if (res == -1)break;
	}

	printf("���� �� �ܾ��� ���� : %d", temp);
	
	return 0;
}