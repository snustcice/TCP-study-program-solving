/*
백준 2577번
세 개의 자연수 A, B, C가 주어질 때 A×B×C를 계산한 결과에 
0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.
예를 들어 A = 150, B = 266, C = 427 이라면
A × B × C = 150 × 266 × 427 = 17037300 이 되고,
계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.

입력
150
266
427

예제 출력
3	0 쓰인 횟수 출력
그 다음 둘째 줄부터 열 번째 줄까지 1부터 9까지

1	1 쓰인 횟수
0	2 쓰인 횟수
2	3 쓰인 횟수
0	4 쓰인 횟수
0	5 쓰인 횟수
0	6 쓰인 횟수	
2	7 쓰인 횟수
0	8 쓰인 횟수
0	9 쓰인 횟수
*/
# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A, B, C;	//입력받는 세 수
	int _0 = 0;
	int _1 = 0;
	int _2 = 0;
	int _3 = 0;
	int _4 = 0;
	int _5 = 0;
	int _6 = 0;
	int _7 = 0;
	int _8 = 0;
	int _9 = 0;		//각자 쓰인 횟수를 0으로 초기화

	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);

	char arr[10];
	sprintf(arr, "%d", A*B*C);
    /*for(int i=0; i<10; i++){
        printf("%c\n", arr[i]);
    }*/

	for (int j = 0; j < 10; j++)		//배열이 char arr이니까 char 형인데 int형인 0, 1, .. 이랑 비교하려니까 이상하게 출력이 된 것 --> '0' 이렇게 쓰자.
	{
		if (arr[j] == '0')
			_0 += 1;
		else if (arr[j] == '1')
			_1 += 1;
		else if (arr[j] == '2')
			_2 += 1;
		else if (arr[j] == '3')
			_3 += 1;
		else if (arr[j] == '4')
			_4 += 1;
		else if (arr[j] == '5')
			_5 += 1;
		else if (arr[j] == '6')
			_6 += 1;
		else if (arr[j] == '7')
			_7 += 1;
		else if (arr[j] == '8')
			_8 += 1;
		else if (arr[j] == '9')
			_9 += 1;
		else
			break;
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d", _0, _1, _2, _3, _4, _5, _6, _7, _8, _9);
	return 0;
}

/*
<전략>
처음에 A B C 입력받는다
그다음 곱한 값 result 에 A B C 곱한 값을 대입한다
배열로?
변수 _0 _1 _2 _3 ... _9까지의 변수에 쓰인 횟수를 할당한다.

*/