// ���� n�� �Է��ϸ� n��°���� �� ��� ex) 4 �Է��ϸ� 1 1 2 3����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long long int a;
	int first = 0;
	int second = 1;
	long long int third;
	int sum = 0;
	int flag = 0;	//�� ��° ������ �˷��ش�.
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
0��° -> 0
1��° -> 1
2��° -> 1
3��° -> 2
flag��° -> ??
*/

/*
���� �ϳ��� �Է¹޴´�
ù��° ������ 0, �ι�° ������ 1
a�� �Է¹޾��� ��, flag�� a���� �۴ٸ� flag�� ������Ų��
���� ��Ÿ���� ���� sum�� ���ο� ���� �־��ش� + ������ش�
*/