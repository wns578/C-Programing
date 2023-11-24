#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int conv123123(char ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
	{
		return ch + diff;
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		return ch - diff;
	}
}

int main()
{
	char str[50];
	int i, len;
	printf("Input> ");
	fgets(str, sizeof(str), stdin);

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		str[i] = conv2(str[i]);
	}
	printf("Output> %s", str);
	return 0;
}