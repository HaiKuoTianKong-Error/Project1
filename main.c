#pragma warning(disable: 4996)
#include <stdio.h>
#include <math.h>
	#include <stddef.h>
	int main()
	{
	double a, b, s1, s2, s3, s4,s5,s6;
		printf("�������������֣���һ��Ϊ����a,�ڶ���Ϊ����b����");
		int ret = scanf(" %lf, %lf", &a, &b);
		if (ret != 2)
		{
			printf("�����ʽ�����밴��'��ֵ����ֵ'�ķ�ʽ����");
			return 1;
		}
	scanf("%lf %lf", &a, &b); 
	printf("�������������+,-,*,/,^,L(ln����)����\n");
	wchar_t input;
	scanf(" %c", &input); 
	if(input == '+') 
	{
	s1=a+b;
	printf("����ǣ�%lf\n", s1);
	} 
	else if(input == '-') 
	{ 
	s2=a-b;
	printf("����ǣ�%lf\n", s2);
	} 
	else if(input == '*') 
	{ 
	s3=a*b;
	printf("����ǣ�%lf\n", s3);
	} 
	else if(input == '/') 
	{ 
	if (b!=0) 
	{
	s4=a/b;
	printf("����ǣ�%lf\n", s4);
	} 
	else 
	{
	printf("���󣺳�������Ϊ0��\n");
	}
	}
	else if(input == '^')
	{
	s5=pow(a,b);
	printf("����ǣ�%lf\n",s5);
	}
	else if(input == 'L')
	{
	s6=log(a+b);
	printf("����ǣ�%lf\n",s6);
	}
	else 
	{
	printf("������Ч���������\n");
	}
	return 0;
	}
