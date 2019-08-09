#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//打印乘法表
int Print(int n)
{
	int i, j;
	for (i = 1; i <=n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d  ",j , i, i*j);
		}
		printf("\n");
	}
	return n;
}
//交换两个数
int Swap(int *a,int *b)
{
	int tem;
	tem = *a;
	*a = *b;
	*b = tem;
	return 1;
}
//判断是不是闰年
int Year(int y)
{
	if ((y % 400 == 0) || ((y % 100 != 0) && (y % 4 == 0)))
	{
		printf("%d是闰年！\n", y);
	}
	else
	{
		printf("%d不是闰年！\n", y);
	}
	return y;
}
  
//判断素数
int Num(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n%i == 0)
		{
			printf("%d不是素数！\n", n);
			break;
		}
		else
		{
			printf("%d是素数！\n", n);
			break;
		}
	}
	return n;
}
//创建一个数组， 
/*实现函数init（）初始化数组、
实现empty（）清空数组、
实现reverse（）函数完成数组元素的逆置。
要求：自己设计函数的参数，返回值*/
void init(int in[],int len)
{
	int i;
	printf("初始化数组为:\n");
	for (i = 0; i <len; i++)
	{
		printf("%d ",in[i]);
	}
	printf("\n");
}

void empty(int em[],int len)
{
	int j;
	printf("清空的数组为:\n");
	for (j = 0; j <len; j++)
	{
		em[j] = 0;
		printf("%d ", em[j]);
	}
	printf("\n");
}
void reverse(int re[],int len)
{
	int i,j,tem;
	int low = 0, high = len-1;
	for (i = 0; i < len/2; i++)
	{
		tem = re[low];
		re[low] = re[high];
		re[high]=tem;
		low++;
		high--;
	}
	printf("逆置后数组为：\n");
	for (j = 0; j < len; j++)
	{
		printf("%d ", re[j]);
	}
}
int main()
{

	/*int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int n = sizeof(a) / sizeof(0);
	init(a,n);
	reverse(a,n);
	empty(a,n);*/

	 /*Num(30);
	Num(7);*/

	//Year(1997);

	/*int a = 20, b = 30;
	Swap(&a, &b);
	printf("交换后：\na=%d b=%d\n", a, b);*/

	//Print(12);
	return 0;
}