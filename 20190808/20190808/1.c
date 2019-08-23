//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
////打印图形
//void Print()
//{
//	int i, j;
//	for (i = 1; i <= 7; i++)
//	{
//		for (j = 1; j <= 7 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 6; i >= 0; i--)
//	{
//		for (j = 0; j < 7 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//
//求水仙花数
//void Num()
//{
//	int tem;
//	int i;
//	for (i = 1; i <= 999999; i++)
//	{
//		int count = 0;
//		int sum = 0;
//		tem = i;
//		while (tem != 0)
//		{
//			count++;
//			tem /= 10;
//		}
//		tem = i;
//		while (tem != 0)
//		{
//			sum += (int)pow(tem % 10, count);
//			tem /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d  ", sum);
//		}
//	}
//	printf("\n");
//}
////求2+22+222+2222+22222
//int Sum(int a, int n)
//{
//	int i, sn1 = 0, sn2 = 0;
//	for (i = 1; i <= n; i++)
//	{
//		sn1 = a + sn1 * 10;
//		sn2 += sn1;
//	}
//	printf("a + aa + aaa……+a….aa（%d个%d）的值为：%d\n", n, a, sn2);
//	return sn2;
//}
//
//int main()
//{
//	//Print();
//	//num();
//	return 0;
//}