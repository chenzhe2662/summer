#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

////�ǵݹ���쳲�����
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
////�ݹ���쳲�����
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
////��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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
////���λ���ֺ�
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
////�ݹ�ֱ�ʵ��n�Ľ׳� 
//int fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n*fac(n - 1);//β�ݹ� û�п����µ�ջ���ӿ��ٶȡ�
//	}
//
//}
////�ǵݹ�ֱ�ʵ��n�Ľ׳�
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
////�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 
//int printnum(int n)
//{
//	if (n > 9)
//	{
//		printnum(n / 10);
//	}
//	printf("%d   ", n % 10);
//	return n;
//}
////�ݹ�ʵ��strlen 
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
////�ǵݹ�ʵ��strlen 
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
////�����ַ���
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






//ˮ����
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
//			tem /= 10;//�ж�λ��
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
	//		flag *= 10;//�ж�λ����m��¼��
	//	}
	//	for (j = i; j; j /= 10)//��λ�����ķ���
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