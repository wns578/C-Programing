#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1, n2;
	printf("Input two integers: ");
	scanf("%d %d", &n1, &n2);
	printf("%d & %d = %d\n", n1, n2, n1 & n2);
	printf("%d | %d = %d\n", n1, n2, n1 | n2);
	printf("%d ^ %d = %d\n", n1, n2, n1 ^ n2);
	return 0;
}