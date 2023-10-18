#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int two(int num)
{
	if (num > 1)
	{
		two(num / 2);
	}
	printf("%d", num % 2);
}
int main()
{
	int a = 0;
	printf("Please enter a number: ");
	scanf("%d", &a);
	two(a);
	return 0;
}