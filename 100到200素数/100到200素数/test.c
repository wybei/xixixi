#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	printf("100-200之间的素数有：");
	for (i = 100; i <= 200;i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j == 0)
				break;
		}
		{
			if (j == i)
				printf("%d ", i);
		}
	}
	system("pause");
 return 0;
}
