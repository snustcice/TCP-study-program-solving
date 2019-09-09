#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//for문, if문 이용해서 풀기?

int main(void)
{
	int num, b, c, d;

	int cycle = 0;

	scanf("%d", &num);	//a는 가장 초기에 입력받는 정수


	for (int e = num; e != num; cycle++)
	{
		b = e / 10;	//10의 자리
		c = e % 10;	//1의 자리
		d = (b + c) % 10;


		e = c * 10 + d;
	}
	printf("%d", cycle);

	getchar();
	getchar();
	return 0;
	getchar();

}