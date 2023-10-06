#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, i;
	int p = 0;
	printf("Please enter a number: ");
	scanf("%d", &n);

	if (n == 1)
	{
		p = 1;
	}

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			p = 1;
		}
	}

	if (p == 0)
	{
		printf("It is a prime number.");
	}
	else
	{
		printf("It is not a prime number.");
	}
	return 0;
}