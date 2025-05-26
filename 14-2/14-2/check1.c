#include <stdio.h>

int main(void)
{
	char* pa[5] = { "apple", "pear", "peach", "banana", "melon" };

	for (int i = 0; i <= 4; i++)
	{
		printf("%s ", pa[i]);
	}

	return 0;
}