// 숫자 n을 입력하면 n번째까지 쭉 출력 ex) 4 입력하면 1 1 2 3까지
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long long int a;
	int first = 0;
	int second = 1;
	long long int third;
	int sum = 0;
	int flag = 0;	//몇 번째 수인지 알려준다.
	scanf("%lld", &a);

	printf("%d ", first);
	printf("%d ", second);

		for (a,sum = 0; flag <= a; flag++)
		{
			third = first + second;
			printf("%lld ",third);
			first = second;
			second = third;
		}

	getchar();
	getchar();
	return 0;
}

/*
0번째 -> 0
1번째 -> 1
2번째 -> 1
3번째 -> 2
flag번째 -> ??
*/

/*
정수 하나를 입력받는다
첫번째 정수는 0, 두번째 정수는 1
a를 입력받았을 때, flag가 a보다 작다면 flag를 증가시킨다
합을 나타내는 변수 sum에 새로운 값을 넣어준다 + 출력해준다
*/