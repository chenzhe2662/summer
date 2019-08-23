//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//void X(char* s, int k)
//{
//	int len = strlen(s);
//	char* i;
//	char* j;
//	for (i = s + k - 1; i >= s; i--)
//	{
//		for (j = i; j < i + len - k; j++)
//		{
//			char tmp = *j;
//			*j = *(j + 1);
//			*(j+1) = tmp;
//		}
//	}
//}
//void reverse(char* arr)
//{
//	char temp = *arr;
//	while (*(arr + 1))//arr加一表示指针的下一个不为0，所以最多访问到0之前
//	{
//		*arr = *(arr + 1);
//		arr++;
//		*arr = temp;
//	}
//}
//int reverse1(char* arr1, char* arr2, int sz)
//{
//	while (sz--)//让目标字符串旋转sz次
//	{
//		reverse(arr1);//旋转一次
//		if (!strcmp(arr1, arr2))//每次的结果进行比较
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//strstr
//int main()
//{
//
//	/*int input = 0;
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	char arr3[] = "ABCDEF";
//	int sz = strlen(arr1);
//	printf("%d\n", reverse1(arr1, arr2, sz)); 
//	printf("%d\n", reverse1(arr1, arr3, sz));*/
//	char str[]= "ABCD";
//	int k = 1;
//	X(str, k);
//	printf("%s\n", str);
//	return 0;
//}