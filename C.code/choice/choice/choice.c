#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
**************ѡ�����**************
int main()
{
	int input = 0;
	printf("����Ӧ��ʲô\?\n");
	printf("��Ҫ�ú�ѧϰ����1/0��>:");
	scanf("%d",&input);
	if (input == 1)
		printf("�ù���\n");
	else
		printf("������\n");

	return 0; 
}

