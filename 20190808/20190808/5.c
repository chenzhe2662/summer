#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
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
void Num(int n)
{
	int i,j;
	int sum = 0;
	int flag=1;
	int m = 0;
	for (i = 0; i < n; i++)
	{
		if (i == n)
		{
			m++;
			flag *= 10;

		}
		for (j = i; j;j/=10)
		{
			sum += pow(j % 10, m);
		}
	}
}
int mian()
{
	Num(100000000);
	return 0;
}