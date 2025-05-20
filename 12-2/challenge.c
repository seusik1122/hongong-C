#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80];
	char str2[80];
	char str3[80];
	char temp[80];

	printf("세 단어 입력 : ");
	scanf("%s %s %s", str1, str2, str3);

	
	if (strcmp(str1, str2) > 0)
	{
		if (strcmp(str1, str3) > 0)
		{
			if (strcmp(str2, str3) > 0)
			{
				strcpy(temp, str1);
				strcpy(str3, temp);
				strcpy(str1, str3);
			}
			else
			{
				strcpy(temp, str1);
				strcpy(str1, str2);
				strcpy(str2, str3);
				strcpy(str3, temp);
			}
		}
		else
		{
			strcpy(temp, str1);
			strcpy(str1, str2);
			strcpy(str2, temp);
		}
	}
	else
	{
		if (strcmp(str1, str3) > 0)
		{
			strcpy(temp, str1);
			strcpy(str1, str3);
			strcpy(str3, str2);
			strcpy(str2, temp);
		}
		if (strcmp(str2, str3) > 0)
		{
			strcpy(temp, str2);
			strcpy(str2, str3);
			strcpy(str3, temp);
		}
	}

	printf("%s, %s, %s", str1, str2, str3);

	return 0;
}