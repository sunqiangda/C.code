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
//enum Sex
//{
//	MALE,
//	FAMALE,
//	SECRET		//枚举常量
//};
//int main()
//{
//	//enum Sex s = MALE;
//	printf("%d\n",MALE);
//	printf("%d\n",FAMALE);
//	printf("%d\n",SECRET);
//
//	return 0;
//}

//**************************字符串***************************
//由双引号引起的一串字符
//int main()
//{
//		"abcdef";
//		"hello bit";
//		"";//空字符串
//		return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//在abc后面有一个\0
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n",strlen(arr1));//strlen-string lenght 计算字符串的长度
//	printf("%d\n",strlen(arr2));//分别输出3，15
//	//{'a', 'b', 'c'}：在找到了3个字符串后，不是\0所以继续计算，直至找的\0
//
//	return 0;
//}
	//数据在计算机上储存的时候，存储的是2进制
	//#av$
	//a-97
	//A-65
	//..   ASCII编码\码值
	
	//char arr1[] = "abc";//将字符串存储在数组中
	////"abc" -- 'a''b''c''\0'
	//char arr2[] = { 'a','b','c', '\0'};//'\0'也可以是0
	//printf("%s\n",arr1);//输出abc,\0表示字符串的结束标准
	//printf("%s\n",arr2);//输出abc烫烫烫烫蘟bc

//******************************转义字符*********************
//转义字符 -- 转变原来的意识
//int main()
//{
//	//printf("abc");//输出abc
//	//printf("abcn");//输出abcn
//	printf("abc\n");//输出abc换行 -- \n表示换行,\t表示水平制表符tab
//	return 0;
//}

//int main()
//{
//	//printf("C:\test\code\test1");
//	printf("C:\\test\\code\\test1"); 
//	//输出C:      estcode est1,这些空白是水平制表符Tab
//	return 0;
//}

//******************************注释*************************************
//
/*
	C语言中不能嵌套
*/
