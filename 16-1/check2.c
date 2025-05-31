#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* max = (int*)malloc(sizeof(int));
	if (max == NULL)
	{
		printf("메모리가 부족합니다");
		return 1;
	}
	free(max);

	return 0;
}