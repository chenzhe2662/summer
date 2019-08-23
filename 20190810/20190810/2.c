//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////写一个函数返回参数二进制中 1 的个数
////比如： 15 0000 1111 4 个 1
////程序原型：
//int count_one_bits(unsigned int value)
//{
//	int count=0;
//	while (value != 0)
//	{
//		count++;
//		value = value&(value - 1);
//
//	}
//	printf("%d\n", count);
//	return count;
//	// 返回 1的位数 
//}
///*获取一个数二进制序列中所有的偶数位和奇数位， 
//分别输出二进制序列。*/
//void num(int num)
//{
//	int i;
//	printf("奇数位：");
//	for (i = 31; i >= 0; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
////输出一个整数的每一位。
//int num1(unsigned int n)
//{
//	if (n > 1)
//	{
//		num1(n / 2);
//	}
//	printf("%d ", n % 2);
//	return n;
//}
//
//int num2( int x,  int y)
//{
//	int n = x^y;
//	int count = 0;
//	while (n != 0)
//	{
//		count++;
//		n = n&(n - 1);
//	}
//	printf("%d\n", count);
//	return count;
//}
//
//
//
//int main()
//{
//	num(-2);
//	//num1(105);//1101001
//	//num2(1999,2299);
//	//count_one_bits(-1);
//	return 0;
//}