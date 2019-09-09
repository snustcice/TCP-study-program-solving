/*
백준 1978번
문제: 주어진 수 N개 중에서 소수가 몇 개인지 출력하는 프로그램을 작성하시오.

입력:

첫 줄의 개수 N이 주어진다. N은 100 이하이다. 다음으로 N개의 수가 주어지는 데
수는 1000 이하의 자연수이다.
출력:

주어진 수들 중 소수의 개수를 출력한다.

입력
4
1 3 5 7

출력
3
*/


#include <stdio.h>

int main(void)
{
	int amount;	//입력되는 숫자의 개수
	int number;	//입력되는 숫자
	int prime = 0;	//소수의 개수

	int div = 2;	//나누는 수
	scanf("%d", &amount);
	for (int i = 0; i < amount; i++)
	{
		scanf("%d", &number);	//매번 어떻게 입력을 받지?
		if (number == 1)
			continue;

		for (int div = 2; div <= number; div++)
		{
			if (number == 2)
				prime++;
			else if (number%div == 0)
				break;

			if (div == (number - 1))
				prime++;
		}	//무조건 prime 하나 증가하는 오류 있음 예시) 6 6 6 6 -> 4개
	}
	printf("%d", prime);
	return 0;
}

/*
매번 입력받을때?

첫 줄에 숫자의 개수 amount 주어진다
for 루프 이용해서 amount보다 적을 때까지 계속 인식하도록
소수라면 prime 변수 1 증가
마지막에 루프 끝나고 prime 출력

소수 판별법
9
9%1 ==0
9%2 !=0
9%3 ==0

나눠지는 수가 입력된 수보다 작은데 0이면 소수가 아님.
*/

/*
하나씩 넘어가면서 1은 예외니까
2부터 시작하는데..

*/