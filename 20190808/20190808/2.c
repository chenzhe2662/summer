//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<time.h>
////��������Ϸ��֧1
//void Menu()
//{
//	printf("********************\n");
//	printf("****1����ʼ��Ϸ*****\n");
//	printf("****2���˳���Ϸ*****\n");
//	printf("********************\n");
//}
////��������Ϸ��֧2
//void Game()
//{
//	srand((unsigned int)time(0));
//	int random = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("���һ��1��100֮�����:\n");
//		do {
//			printf("���������²������\n");
//			scanf("%d", &guess);
//			if (guess > random) {
//				printf("���´���\n");
//			}
//			else if (guess < random)
//			{
//				printf("����С��\n");
//			}
//
//		} while (random != guess);
//		printf("��ϲ������ˣ�����ֵΪ��%d\n", random);
//
//	}
//}
////��������Ϸ��֧3
//void Start()
//{
//	int input = 0;
//	do{
//		Menu();
//		printf("���������");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Game();
//			break;
//		case 2:
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("�Բ���������ˣ���������ȷ�����֣�\n");
//			break;
//		}
//	} while (input);
//
//}
////�۰����
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
////��������
//void M()
//{
//	int c = 3;
//	while (c != 0)
//	{
//		char a[10] = { 0 };
//		printf("������������룺\n");
//		scanf("%s", a);
//		if (strcmp(a, "123456abc") == 0)
//		{
//			printf("��½�ɹ���");
//			break;
//		}
//		c--;
//		printf("��������㻹Ҫ%d�λ���!\n", c);
//	}
//}
////��ӡ�ַ�
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
//{//��������
//	/*int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int len = sizeof(a) / sizeof(a[0]);
//	int ret = binSearch(a, 9, len);
//	if (ret == -1)
//	{
//	printf("û���ҵ���\n");
//	}
//	else
//	{
//	printf("%d\n", ret);
//	}*/
//	return 0;
//}