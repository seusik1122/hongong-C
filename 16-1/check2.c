#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* max = (int*)malloc(sizeof(int));
	if (max == NULL)
	{
		printf("�޸𸮰� �����մϴ�");
		return 1;
	}
	free(max);

	return 0;
}