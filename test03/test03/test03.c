#include<stdio.h>
//int main()
//{

	//const - �����ԣ��Һ����ٸ��ı���
	//const int n = 10;//n�Ǳ����������г������ԣ���������˵n�ǳ�����
	//int n = 10;		//int n :n �Ǳ���
	//int arr[10] = {0};//[10]�ǳ���
	//arr��������

//const���εĳ�����
//	int num = 4;
//	printf("%d\n", num);
//	8
//	4
//	1.55	//���泣��
//
//	num = 8;
//	printf("%d\n", num);
//
//	return 0;
//}
//*****************************#define����ı�ʶ������*****************************
//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
//
//	return 0;//���10
//}

//*********************************ö�ٳ���*****************************************
//ö�ٹؼ� -- enum
enum Sex
{
	MALE,
	FAMALE,
	SECRET		//ö�ٳ���
};
int main()
{
	//enum Sex s = MALE;
	printf("%d\n",MALE);
	printf("%d\n",FAMALE);
	printf("%d\n",SECRET);

	return 0;
}