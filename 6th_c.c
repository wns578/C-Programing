#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int result=1;
int nn(int num)
{
	result *= 2;
	if (num>1)
	{
		nn(num - 1);
	}
}
int main777()
{
	int n = 0;
	printf("2�� �� ���� ���Ͻðڽ��ϱ�?\n");
	scanf("%d", &n);
	nn(n);
	printf("%d", result);
	return 0;
}