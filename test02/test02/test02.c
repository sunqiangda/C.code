#define _CRT_SECURE_NO_WARINGS
#include<stdio.h>


<<<<<<< HEAD
int main()
{
	//�����������ĺ�
	int num1 = 1;
	int num2 = 2;
	int sum = 3;
	scanf_s("%d%d", &num1, &num2);//ȡ��ַ����
	//�������� - ʹ�����뺯��scanf
	//int sum = 0;//������C���Թ涨������Ҫ�����ڵ�ǰ��������ǰ��
	sum = num1 + num2;
	printf("sunm = %d\n", sum);
	return 0;
}
=======
//int main()
//{
//	//�����������ĺ�
//	int num1 = 1;
//	int num2 = 2;
//	int sum = 3;
//	scanf_s("%d%d", &num1, &num2);//ȡ��ַ����
//	//�������� - ʹ�����뺯��scanf
//	//int sum = 0;//������C���Թ涨������Ҫ�����ڵ�ǰ��������ǰ��
//	sum = num1 + num2;
//	printf("sunm = %d\n", sum);
//	return 0;
//}
>>>>>>> 0ab309a (Required)
//int a = 100;
//int main()
//{
//	int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֲ�������ͬ�����ײ���bug
//	//���ֲ�������ȫ�ֱ�����������ͬʱ���ֲ���������
//	printf("%d\n",a);
//	return 0;
//}

//int num2 = 20;//ȫ�ֱ���- �����ڴ���飨{ }��֮��ı���
//int main()
//{
//	int num2 = 10;//�ֲ�����- �����ڴ���飨{ }��֮�ڵı���
<<<<<<< HEAD
//}
=======
//}
//***********************���������������������****************************
//{
//	//�ֲ�������������
//	{int num = 0;
//	printf("num = %d\n", num); 
//	}
//	return 0;
//} 

//             ȫ�ֱ�����������
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
//	//δ�����ı�ʶ��
//	//����extern�ⲿ���ŵ�
//	extern int gog;
//	printf("gog = %d\n",gog);
//	return 0;
//}

//********************��������**********************

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
