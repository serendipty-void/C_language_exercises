//��������һ����λ��,�����λ���ַ������(��������123,���321)����2�֣�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n,a,b,c;
	scanf("%d", &n);
	a = n / 100;
	b = (n % 100)/10;
	c = n % 10;
	printf("%d\n", c*100+b*10+a);
}