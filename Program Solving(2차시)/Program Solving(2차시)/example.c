#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main(void)
{
	int number;

	printf("1부터 100 사이의 정수를 입력해 주십시오.\n");
	scanf("%d", &number);
	

	for (int j=0; j < number; j++) {
		
		for (int k = 0; k < j; k++) {
			printf(" ");

		}
		
		for (int i=number; i>j; i--) {
			printf("*");
			
		}
		printf("\n");

	}
	printf("%d", number);
	system("pause");

	return 0;
}