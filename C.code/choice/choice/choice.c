#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
**************选择语句**************
int main()
{
	int input = 0;
	printf("现在应该什么\?\n");
	printf("我要好好学习？（1/0）>:");
	scanf("%d",&input);
	if (input == 1)
		printf("好工作\n");
	else
		printf("卖红薯\n");

	return 0; 
}

