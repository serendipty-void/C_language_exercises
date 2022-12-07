//编程实现:输入一个整数,判断它能否被3,5,7整除,并输出以下信息之一:
//能同时被3, 5, 7整除;
//能被其中两个数(要指出哪两个)整除;
//能被其中一个数(要指出哪一个)整除;
//不能被3, 5, 7任一个整除。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if (n % 3 == 0 && n % 5 == 0 && n % 7 == 0)
	{
		printf("此数能同时被3, 5, 7整除\n");
	}
	else if (n % 3 == 0 && n % 5 == 0)
	{
		printf("此数能同时被3, 5整除\n");
	}
	else if (n % 5 == 0 && n % 7 == 0)
	{
		printf("此数能同时被5,7整除\n");
	}
	else if (n % 3 == 0 && n % 7 == 0)
	{
		printf("此数能同时被3,7整除\n");
	}
	else if(n % 3 == 0 )
	{
		printf("此数能被3整除\n");
	}
	else if (n % 5 == 0)
	{
		printf("此数能被5整除\n");
	}
	else if (n % 7 == 0)
	{
		printf("此数能被7整除\n");
	}
	else
	{
		printf("此数不能被3, 5, 7任一个整除\n");
	}
	return 0;
}