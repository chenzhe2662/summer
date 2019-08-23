//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
/////*unsigned int reverse_bit(unsigned int value); 
////这个函数的返回值是value的二进制位模式从左到右翻转后的值。*/
//unsigned int reverse_bit(unsigned int value)
//{
//	int i;
//	unsigned int a, b;
//	unsigned int sum = 0;
//	printf("%d的二进制为：\n", value);
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d ", (value >> i) & 1);
//	}
//	printf("\n");
//	for (i = 0; i < 32; i++)
//	{
//			a = value & 1;
//			b=a<< (31 - i);
//			sum += b;
//			value = value >> 1;
//	}
//	printf("%u的二进制为：\n", sum);
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d ", (sum >> i) & 1);
//	}
//	return sum;
//}
////
//////不使用（a+b）/2这种方式，求两个数的平均值。 
////int avg(int a, int b)
////{
////	int sum;
////	sum = a + b;
////	return sum >> 1;
////}
/////*
////一组数据中只有一个数字出现了一次。
////其他所有数字都是成对出现的。
////请找出这个数字。（使用位运算）
////*/
////void find(int *a,int len)
////{
////	int i;
////	int ret=0;
////	for (i = 0; i < len; i++)
////	{
////		ret =ret^a[i];
////	}
////	printf("%d\n", ret);
////}
/////*有一个字符数组的内容为:"student a am i", 
////请你将数组的内容改为"i am a student". 
////要求： 
////不能使用库函数。 
////只能开辟有限个空间（空间个数和字符串的长度无关）。 */
////int strlen(char *p)
////{
////	int count = 0;
////	if (*p == '\0')
////	{
////		return 0;
////	}
////	else
////	{
////		return 	1 + strlen(p + 1);
////	}
////}
////void resverse(char* sta, char* end)//置换函数
////{
////	while (sta < end)
////	{
////		char tem = *sta;
////		*sta = *end;
////		*end = tem;
////		sta++;
////		end--;
////	}
////}
////void word(char *str)  //分单词函数
////{
////	char *sta = str;
////	char *end = str + strlen(str) - 1;//首地址加字符串长度
////	resverse(sta, end);//整体逆置
////	char *p = str;
////	while (*p != '\0')
////	{
////		char  *start = p;
////		while (*p != ' '&&*p != '\0')
////		{
////			p++;
////		}
////		resverse(start, p - 1);//单词逆置
////		if (*p == ' ')
////		{
////			p++;
////		}
////	}
////}
////
//int main()
//{
//
////	    char b[] = "i am a student";
////		puts(b);
////		word(b);
////		puts(b);
////	/*int a[5] = { 1, 30, 46,30,1};
////	int len = sizeof(a) / sizeof(a[0]);
////	find(a, len);*/
////	//printf("%d\n",avg(10, 20));
//	//reverse_bit(25);
//	return 0;
//}