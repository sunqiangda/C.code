#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("max = %d\n", num2);
//
//
//	return 0;
//}


//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是： %d\n", num1);
//	else
//		printf("较大值是： %d\n", num2);
//
//	return 0;
//}

//************************************
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);//scanf输入函数
//	int sum = num1 + num2;
//	函数的方式解决
//	int sum = Add(num1 , num2);
//	printf("%d\n", sum);
//	return 0;
//}
//*******  scanf函数的解释************
//int main(void) {
//    int a, b, c;
//    printf("input a,b,c\n");
//    scanf("%d%d%d", &a, &b, &c);
//    printf("a=%d,b=%d,c=%d", a, b, c);
//    return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	while (i < 10)
		{
			printf("%d\t", arr[i]);
			i++;
		}
	return 0;
}