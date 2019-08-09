#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d \n", n % 10);
//}
//int Str(char *p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	return 1 + Str(p + 1);
//}
//
//
//
//int M(int a)
//{
//	int i = 0;
//	for (i = 2; i < a; i++)
//	{
//		if (a%i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int year(int y)
//{
//	if (y % 400 == 0)
//	{
//		if (y % 4 == 0 && y % 100 == 0)
//		{
//			printf("%d年是闰年！", y);
//		}
//	}
//	else
//	{
//		printf("%d年不是闰年！", y);
//	}
//	return y;
//}
////void N(int *p)
////{
////	(*p)++;
////
////}
//void N(int p)
//{
//	p++;
//
//}
//int Febonaci(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return Febonaci(n - 1) + Febonaci(n - 2);
//}
//int main()
//{
//	/*char *str = "hello word";
//	printf("%d\n", Str(str));*/
//	printf("%d\n", Febonaci(5));
//
//	//print(1234567);
//	/*int num = 0;
//
//	printf("%d\n", N(num));*/
//	/*printf("%d\n", N(5));*/
//}