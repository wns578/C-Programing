#include <stdio.h>
int main()
{
	int i, k = 0;
	for (i = 0; i < 5; i++)
	{
		for (k = 0; k < 4 - i; k++)
		{
			printf(" ");
		}
		for (k = 0; k < i*2+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
