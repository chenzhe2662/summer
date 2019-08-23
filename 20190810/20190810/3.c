#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
A选手说：B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四，A第一；
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。*/
void com()
{
	int a, b, c, d, e;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (a*b*c*d*e == 120)
						{
							if (((b == 2) + (a == 3) == 1) &&
								((b == 2) + (e == 4) == 1) &&
								((c == 1) + (d == 2) == 1) &&
								((c == 5) + (d == 3) == 1) &&
								((e == 4) + (a == 1) == 1))
							{
								printf("A第%d\nB第%d\nC第%d\nD第%d\nE第%d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
}
/*日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个。
	嫌疑犯的一个。以下为4个嫌疑犯的供词。
	A说：不是我。
	B说：是C。
	C说：是D。
	D说：C在胡说
	已知3个人说了真话，1个人说的是假话。
	现在请根据这些信息，写一个程序来确定到底谁是凶手。*/
void K()
{
	char k;
	for (k = 'a'; k <= 'd'; k++)
	{
		if ((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd') == 3)
		{
			printf("%c是凶手！",k);
		}
	}
}
void yang(int n)
{
	int a[100][100];
	a[0][0] = 1;
	int i, j;
	for (i = 0; i <n; i++)
	{
		a[i][0] = 1;//第一列一直是1
		for (j = 0; j <=i ; j++)
		{
			if (j == 0)
			{
				a[i][j] = 1;
			}
			else if (j>0&&i>0&&i!=j)
			{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
			else if (i == j)
			{
				a[i][j] = 1;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d   ", a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	yang(20);

	//K();
	//com();
	return 0;
} 