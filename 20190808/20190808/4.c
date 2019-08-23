#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

////非递归求斐波那契
//int fib1(int n)
//{
//	int f1 = 1, f2 = 1, f3;
//	int i;
//	for (i = 3; i <= n; i++)
//	{
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//
//	}
//	return f3;
//
//}
////递归求斐波那契
//int fib2(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib2(n - 1) + fib2(n - 2);
//	}
//}
//
////编写一个函数实现n^k，使用递归实现
//int pow(int n, int k)
//{
//
//	if (k == 1)
//	{
//
//		return n;
//	}
//
//	else
//	{
//		return n*pow(n, k - 1);
//	}
//}
//
////求各位数字和
//int sum = 0;
//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		DigitSum(n / 10);
//	}
//	sum += n % 10;
//	return sum;
//}
////递归分别实现n的阶乘 
//int fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*fac(n - 1);//尾递归 没有开辟新的栈，加快速度。
//	}
//
//}
////非递归分别实现n的阶乘
//int Fac(int n)
//{
//	int i;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
////递归方式实现打印一个整数的每一位 
//int printnum(int n)
//{
//	if (n > 9)
//	{
//		printnum(n / 10);
//	}
//	printf("%d   ", n % 10);
//	return n;
//}
////递归实现strlen 
//int strlen1(char *p)
//{
//
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 	1 + strlen(p + 1);
//	}
//}
////非递归实现strlen 
//int Strlen(char *p)
//{
//	int count = 0;
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
////逆置字符串
//void reverse_string(char *string)
//{
//	int n = strlen(string);
//	if (*string == '\0')
//	{
//		return;
//	}
//	else
//	{
//		reverse_string(string + 1);
//		n -= 1;
//	}
//	putchar(*string);
//	
//}
//void reverse_string(char *string)
//{
//	/*int ch;
//	int n = strlen(string);*/
//	if (*string)
//	{
//		int ch;
//		int n = strlen(string);
//		ch =string[0];
//		string[0] = string[n - 1];
//		string[n - 1] = '\0';
//		reverse_string(string + 1);
//		string[n - 1] = ch;
//	}
//
//}
//void reverse_string(char * str)
//{
//	if (*str)
//	{
//	    int tmp;
//		int end = strlen(str) - 1;
//		tmp = *str;
//		*str = str[end];
//		str[end] = '\0';
//		reverse_string(str + 1);
//		str[end] = tmp;
//	}
//
//}






//水仙数
//void Num(int n)
//{
//	int i;
//	int tem;
//	for (i = 0; i < n; i++)
//	{
//		int sum = 0;
//		int count = 0;
//		tem = i;
//		while (tem != 0)
//		{
//			count++;
//			tem /= 10;//判断位数
//		}
//		tem = i;
//		while (tem != 0)
//		{
//			sum += (int)pow(tem % 10, count);
//			tem /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d\n", sum);
//		}
//	}
	//int i, j;
	//int flag = 10;
	//int m = 1;
	//int sum = 0;
	//for (i = 0; i < n; i++)
	//{
	//	if (i == flag)
	//	{
	//		m++;
	//		flag *= 10;//判断位数用m记录。
	//	}
	//	for (j = i; j; j /= 10)//数位遍历的方法
	//	{
	//		sum += (int)pow(j % 10,m);
	//	}
	//	if (sum == i)
	//	{
	//		printf("%d\n", sum);
	//	}
	//	sum = 0;
	//}

}
//int main()
//{
//	/*char *a = "hello123456";
//	printf("%d\n", strlen1(a));
//	printf("%d\n", Strlen(a));*/
//
//	char b[] = "abcdef1234";
//	puts(b);
//	reverse_string(b);
//	puts(b);
//
//
//	//printnum(1234);
//
//	//printf("%d\n", fac(5));
//	//printf("%d\n", Fac(5));
//
//	//printf("%d\n", DigitSum(1729));
//
//	//printf("%d\n", pow(2,10));
//
//	/*printf("%d\n", fib1(40));
//	printf("%d\n", fib2(40));*/
//	return 0;
//}