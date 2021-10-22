#define _CRT_SECURE_NO_WARINGS

#include<stdio.h>
//包含一个叫stdio.h的文件
//std-标准（standard）

/*int main()//主函数-程序的入口，有且仅有一个
		//int 是整数型
//	main前面的int表示main函数调用返回的一个整数值
{
	printf("hello world!\n");//\n表示换行
	//这里完成任务。再屏幕上输出hello world
	// 库函数- C语音本身提供的函数
	//函数-print function = printf - 打印函数
	return 0;//返回 0
}
*/
//**************************************************
int main()
{
	char ch = 'A';//内存
	//printf("%c\n", ch);//%c - 打印字符格式的数据
	int age = 20;
	printf("%d\n", age);//$d - 打印整型十进制数据
	return 0;

	short age1 = 20;//向内存申请两个字节 = 16bit位，用来存放20
	float weight = 95.6f;//向内存申请4个字节存放小数 

	return 0;

}