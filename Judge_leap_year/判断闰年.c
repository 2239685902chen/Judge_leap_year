#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int q = 0;
	scanf("%d", &q);
	if (!(q % 4) && q % 100)
	{
		printf("yes\n");
	}
	else if (!(q % 100) && !(q % 400))
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}