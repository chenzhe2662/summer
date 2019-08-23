#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define row 3
#define col 3
/*输入一个整数数组，实现一个函数， 
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分， 
所有偶数位于数组的后半部分。 */
void  num(int *a,int len)
{
	int j, i;
	for (j = 0; j < len - 1;j++)
		for (i = j; i < len-1; i++)
		{
			if (a[i] % 2 == 0)
			{
				int tem = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tem;
			}
		}
	}

void print(int *a,int len )
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
int yang(int a[row][col], int n)
{
	int i = 0;
	int j=col - 1;
		while (i>=0&&i<=row-1&&j>=0&&j<=col-1)
		{
			int tem = a[i][j];
			if (tem == n )
			{
				return 1;
			}
			else if (tem< n&&j>=0)
			{
				i++;
				tem = a[i][j];
			}
			else if (tem> n&&i<=col-1)
			{
				j--;
				tem = a[i][j];
			}
			else
			{
				return 0;
			}
		}
		return 0;
}

int main()
{
	/*int a[row][col] = { 1, 2, 3,  5, 6, 7, 8, 9 ,10};
	int ret = yang(a,4);
	if (ret == 1)
	{
		printf("找到了！\n");
	}
	else
	{
		printf("没有找到！\n");
	}*/
	int b[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 ,11,25,22,20,32,31};
	int len = sizeof(b) / sizeof(b[0]);
	print(b, len);
	num(b, len);
	print(b, len);

	return 0;
}