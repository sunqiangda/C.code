#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//
//	int a1 = arr1[2];
//	int a2 = arr2[2];
//	int z = a1+a2;
//	printf("z = %d\n", z);
//	return 0;
//}
//***********************
//int main()
//{
//	int arr[5]  = {0};
//	scanf("%d" ,& arr[5]);
//		printf("%d\n", arr[5]);
//	return 0;
//}
//****************************常见关键字*****************
//C语言提供的关键字
	//1.C语言提供的，不能自己创造
	//2.变量名不能是关键字
//int main()
//{
//	//int char;
//	{
//		int a = 10;//自动创建，自动销毁 - 自动变量
//		//auto都省略掉（新的C语言语法中也有其他的用法，暂时不考虑）
//			 
//	}
//	return 0;
//}
//int main()
//{
//	register int num = 100;//建议num的值存放在寄存器中
//	return 0;
//} 
//**************define定义宏*******************
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", 4 * ADD(2, 3));
//	return 0;
//}
//*****************指针