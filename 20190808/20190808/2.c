//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<time.h>
////猜数字游戏分支1
//void Menu()
//{
//	printf("********************\n");
//	printf("****1、开始游戏*****\n");
//	printf("****2、退出游戏*****\n");
//	printf("********************\n");
//}
////猜数字游戏分支2
//void Game()
//{
//	srand((unsigned int)time(0));
//	int random = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜一个1到100之间的数:\n");
//		do {
//			printf("请输入您猜测的数：\n");
//			scanf("%d", &guess);
//			if (guess > random) {
//				printf("您猜大了\n");
//			}
//			else if (guess < random)
//			{
//				printf("您猜小了\n");
//			}
//
//		} while (random != guess);
//		printf("恭喜你猜中了！！！值为：%d\n", random);
//
//	}
//}
////猜数字游戏分支3
//void Start()
//{
//	int input = 0;
//	do{
//		Menu();
//		printf("输入操作：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Game();
//			break;
//		case 2:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("对不起，您输错了！请输入正确的数字！\n");
//			break;
//		}
//	} while (input);
//
//}
////折半查找
//int binSearch(int a[], int key, int len)
//{
//	int mid;
//	int low = 0;
//	int high = len - 1;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (a[mid] > key)
//		{
//			high = mid - 1;
//		}
//		else if (a[mid] < key)
//		{
//			low = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
////输入密码
//void M()
//{
//	int c = 3;
//	while (c != 0)
//	{
//		char a[10] = { 0 };
//		printf("请输入你的密码：\n");
//		scanf("%s", a);
//		if (strcmp(a, "123456abc") == 0)
//		{
//			printf("登陆成功！");
//			break;
//		}
//		c--;
//		printf("输入错误，你还要%d次机会!\n", c);
//	}
//}
////打印字符
//void printChar()
//{
//	char str[] = "123ABCD45efG";
//	int len = sizeof(str) / sizeof(str[0]);
//	int s = 0;
//	printf("%s\n", str);
//	for (s = 0; s < len; s++)
//	{
//		if (str[s] >= 'A'&&str[s] <= 'Z')
//		{
//			str[s] += 32;
//			printf("%c", str[s]);
//		}
//		else if (str[s] >= 'a'&&str[s] <= 'z')
//		{
//			str[s] -= 32;
//			printf("%c", str[s]);
//		}
//	}
//	printf("\n");
//}
//int main()
//{//输入密码
//	/*int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int len = sizeof(a) / sizeof(a[0]);
//	int ret = binSearch(a, 9, len);
//	if (ret == -1)
//	{
//	printf("没有找到！\n");
//	}
//	else
//	{
//	printf("%d\n", ret);
//	}*/
//	return 0;
//}