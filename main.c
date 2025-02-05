#pragma warning(disable: 4996)
#include <stdio.h>
#include <math.h>
	#include <stddef.h>
	int main()
	{
	double a, b, s1, s2, s3, s4,s5,s6;
		printf("请输入两组数字（第一个为变量a,第二个为变量b）：");
		int ret = scanf(" %lf, %lf", &a, &b);
		if (ret != 2)
		{
			printf("输入格式有误，请按照'数值，数值'的方式输入");
			return 1;
		}
	scanf("%lf %lf", &a, &b); 
	printf("请输入运算符（+,-,*,/,^,L(ln对数)）：\n");
	wchar_t input;
	scanf(" %c", &input); 
	if(input == '+') 
	{
	s1=a+b;
	printf("结果是：%lf\n", s1);
	} 
	else if(input == '-') 
	{ 
	s2=a-b;
	printf("结果是：%lf\n", s2);
	} 
	else if(input == '*') 
	{ 
	s3=a*b;
	printf("结果是：%lf\n", s3);
	} 
	else if(input == '/') 
	{ 
	if (b!=0) 
	{
	s4=a/b;
	printf("结果是：%lf\n", s4);
	} 
	else 
	{
	printf("错误：除数不能为0。\n");
	}
	}
	else if(input == '^')
	{
	s5=pow(a,b);
	printf("结果是：%lf\n",s5);
	}
	else if(input == 'L')
	{
	s6=log(a+b);
	printf("结果是：%lf\n",s6);
	}
	else 
	{
	printf("错误：无效的运算符。\n");
	}
	return 0;
	}
