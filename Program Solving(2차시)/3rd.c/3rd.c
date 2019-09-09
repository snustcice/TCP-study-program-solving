#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<Windows.h>
int main()
{
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d, %d, %d", num1, num2, num3);

	int first, second, third;
	if (num1 > num2 > num3) {
		second = num2;
	}
	if (num1 > num3 > num2) {
		second = num3;
	}
	if (num2 > num3 > num1) {
		second = num3;
	}
	if (num2 > num1 > num3) {
		second = num1;
	}
	if (num3 > num1 > num2) {
		second = num1;
	}
	if (num3 > num2 > num1) {
		second = num2;
	}
	system("pause");
	return 0;
}