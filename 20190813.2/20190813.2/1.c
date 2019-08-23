#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int check1()
//{
//	int a = 0x12345678;
//	char *n= (char*)&a;
//	if (*n == 0x78)
//	{
//		return 1;
//	}
//		return 0;
//}
//int check2()
//{
//	union
//	{
//		short sh;
//		char ch;
//	}un;
//	un.sh = 1;
//	return un.ch;
//}
int IsLittle()
{
	short i = 0x0001;
	return (*(char*)&i)==0x01;
}
long htonl(long a)
{
	int i;
	long b = 0;
	if (!IsLittle())
	{
		return a;
	}
	for (i = 0;i<sizeof(a);i++)
	{
		b = (b << 8) | (a & 0xff);
		a >>=8;
	}
	return b;
}
int main()
{
	printf("%x\n",htonl(0x12345678));
	printf("%x\n", 0x12345678);
	/*int ret = check1();
	if (ret == 1)
	{
		printf("为小端！");
	}
	else
	{
		printf("为小端！");
	}*/
}