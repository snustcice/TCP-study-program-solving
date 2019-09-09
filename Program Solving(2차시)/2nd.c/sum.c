#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);


	printf("%d\n", num * (num + 1) / 2);

	getchar();
	getchar();

	return 0;

}