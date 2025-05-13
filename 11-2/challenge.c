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

	printf("가장 긴 단어의 길이 : %d", temp);
	
	return 0;
}