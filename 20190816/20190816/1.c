#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
struct test{
	int num;
	char*pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;
int main(){
//	int ret = 0;
//	int in = 0;
//	int(*a[4])(int, int) = { add, sub, mul, div };
//	printf("1���ӷ� 2������ 3���˷� 4������\n");
//	printf("��ѡ��");
//	scanf("%d", &in);
//	if (in > 4 && in < 1){
//		printf("���������������");
//		return 1;
//	}
//	else {
//		ret = (*a[in - 1])(20, 20);
//		printf("ret=%d", ret);
//	}
//
//
//	
//	//�������
	char *c[] = { "ENTER", "NEW", "POINT","FIRST" };
	char**cp[] = { c + 3, c + 2, c + 1, c };
	char***cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][-1]+1);
//	//��������
//	/*char *a[]= { "work", "at", "alibaba" };
//	char **pa = a;
//	pa++;
//	printf("%s\n", *pa);*/
//	//��������
//	/*int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int*)(&aa + 1);
//	int *ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));*/
//	//��������
	/*int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);*/
//	//������
	/*int a[3][2] = { (0, 1), (2, 3), (4, 5) };
	int *p;
	p = a[0];
	printf("%d\n", p[0]);*/
//	//������
	/*int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int*)(&a + 1);
	int *ptr2 = (int*)((int)a+1 );
	printf("%x,%x", ptr1 [-1], *ptr2 );*/
	////���Զ�
	/*printf("%p\n", p +0x1);
	printf("%p\n", (unsigned long)p+0x1 );
	printf("%p\n", (unsigned int*)p+0x1 );*/
//	//������1
//	/*int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));*/
	return 0;
	}
