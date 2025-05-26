#include <stdio.h>

int main(void)
{
	int num[5][6] = {
		{1,2,3,4,5, 0},
		{6,7,8,9,10, 0},
		{11,12,13,14,15, 0},
		{16,17,18,19,20, 0},
		{0}
	};
	int total;

	for (int i = 0; i < 4; i++)
	{
		total = 0;
		for (int j = 0; j < 5; j++)
		{
			total += num[i][j];
		}
		num[i][5] = total;
	}

	for (int i = 0; i < 6; i++)
	{
		total = 0;
		for (int j = 0; j < 4; j++)
		{
			total += num[j][i];
		}
		num[4][i] = total;
	}


	for (int i = 0; i<5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%3d ", num[i][j]);
		}
		printf("\n");
	}

	return 0;
}