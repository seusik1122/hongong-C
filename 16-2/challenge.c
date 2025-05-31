#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* ps;
	int count;
	int num = 2;

	printf("양수 입력 : ");
	scanf("%d", &count);
	ps = (int*)malloc((count - 2) * sizeof(int));
	if (ps == NULL)
	{
		printf("메모리가 부족합니다.");
		exit(1);
	}
	for (int i = 0; i < ((count - 2)/5) + 1; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (num == 2 || num == 3 || (num > 3 && num % 2 != 0 && num % 3 != 0))
			{
				printf("%3d", num);
			}
			else
			{
				printf("%3c", 'X');
			}
			num++;
			if (num == count) break;
		}
		printf("\n");
	}

	return 0;
}