#include<stdio.h>
//int main()
//{

	//const - 常属性，且后不能再更改变量
	//const int n = 10;//n是变量，但又有常量属性，所以我们说n是常变量
	//int n = 10;		//int n :n 是变量
	//int arr[10] = {0};//[10]是常量
	//arr创建数组

//const修饰的常变量
//	int num = 4;
//	printf("%d\n", num);
//	8
//	4
//	1.55	//字面常量
//
//	num = 8;
//	printf("%d\n", num);
//
//	return 0;
//}
//*****************************#define定义的标识符常量*****************************
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
//
//	return 0;//输出10
//}

//*********************************枚举常量*****************************************
//枚举关键 -- enum
enum Sex
{
	MALE,
	FAMALE,
	SECRET		//枚举常量
};
int main()
{
	//enum Sex s = MALE;
	printf("%d\n",MALE);
	printf("%d\n",FAMALE);
	printf("%d\n",SECRET);

	return 0;
}