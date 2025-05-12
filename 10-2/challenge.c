#include <stdio.h>

void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int* lotto_nums)
{
	for (int i = 0; i < 6; i++)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", lotto_nums + i);
		if (i >= 1)
		{
			for (int j = 0; j < i;j++)
			{
				if (lotto_nums[i] == lotto_nums[j])
				{
					printf("���� ��ȣ�� �ֽ��ϴ�!\n");
					printf("��ȣ �Է� : ");
					scanf("%d", lotto_nums + i);
				}
			}
		}
	}
}

void print_nums(int* lotto_nums)
{
	printf("�ζ� ��ȣ : ");

	for (int i = 0; i < 6; i++)
	{
		printf("%3d", lotto_nums[i]);
	}
}

