#define _CRT_SECURE_NO_WARINGS
#include<stdio.h>


<<<<<<< HEAD
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
=======
//int main()
//{
//	//计算两个数的和
//	int num1 = 1;
//	int num2 = 2;
//	int sum = 3;
//	scanf_s("%d%d", &num1, &num2);//取地址符号
//	//输入数据 - 使用输入函数scanf
//	//int sum = 0;//（错误）C语言规定，变量要定义在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sunm = %d\n", sum);
//	return 0;
//}
>>>>>>> 0ab309a (Required)
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
<<<<<<< HEAD
//}
=======
//}
//***********************变量的作用域和生命周期****************************
//{
//	//局部变量的作用域
//	{int num = 0;
//	printf("num = %d\n", num); 
//	}
//	return 0;
//} 

//             全局变量的作用域
//int global = 2020;
//
//void test()
//{
//	printf("test()-- %d\n",global);
//}
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}

//int main()
//{
//	//未声明的标识符
//	//声明extern外部符号的
//	extern int gog;
//	printf("gog = %d\n",gog);
//	return 0;
//}

//********************生命周期**********************

int main()
{
	{
		int a = 10;
		printf("a = %d\n",a);//ok

	}
	//printf("a = %d\n", a);//error
	return 0;
}
>>>>>>> 0ab309a (Required)
