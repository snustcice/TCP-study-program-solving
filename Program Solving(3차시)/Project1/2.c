#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//for��, if�� �̿��ؼ� Ǯ��?

int main(void)
{
	int num, b, c, d;

	int cycle = 0;

	scanf("%d", &num);	//a�� ���� �ʱ⿡ �Է¹޴� ����


	for (int e = num; e != num; cycle++)
	{
		b = e / 10;	//10�� �ڸ�
		c = e % 10;	//1�� �ڸ�
		d = (b + c) % 10;


		e = c * 10 + d;
	}
	printf("%d", cycle);

	getchar();
	getchar();
	return 0;
	getchar();

}