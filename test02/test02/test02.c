#define _CRT_SECURE_NO_WARINGS
#include<stdio.h>


int main()
{
	//计算两个数的和
	int num1 = 1;
	int num2 = 2;
	int sum = 3;
	scanf_s("%d%d", &num1, &num2);//取地址符号
	//输入数据 - 使用输入函数scanf
	//int sum = 0;//（错误）C语言规定，变量要定义在当前代码块的最前面
	sum = num1 + num2;
	printf("sunm = %d\n", sum);
	return 0;
}
//int a = 100;
//int main()
//{
//	int a = 10;
//	//局部变量和全局变量的名字不建议相同，容易产生bug
//	//当局部变量和全局变量的名字相同时，局部变量优先
//	printf("%d\n",a);
//	return 0;
//}

//int num2 = 20;//全局变量- 定义在代码块（{ }）之外的变量
//int main()
//{
//	int num2 = 10;//局部变量- 定义在代码块（{ }）之内的变量
//}