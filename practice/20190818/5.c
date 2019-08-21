//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////.写代码可以在整型有序数组中查找想要的数字， 
////找到了返回下标，找不到返回 - 1.（折半查找）
//int find(int *a,int n,int len){
//	int low = 0;
//	int high = len - 1;
//	int mid;
//	int i;
//	for (i = 0; i < len; i++){
//		mid = (low + high) / 2;
//		if (n>a[mid]){
//			low = mid + 1;
//		}
//		else if (n<a[mid]){
//			high = mid - 1;
//		}
//		else if (n = a[mid]){
//			return mid;
//		}
//	}
//	return -1;
//}
////编写一个程序，可以一直接收键盘字符，
////如果是小写字符就输出对应的大写字符，
////如果接收的是大写字符，就输出对应的小写字符，
////如果是数字不输出。
//void print(char *a){
//	int i;
//	for (i = 0; a[i]; i++){
//		if (a[i]<='z'&&a[i]>='a'){
//			a[i] -= 32;
//		}
//		else if (a[i]<'Z'&&a[i]>'A'){
//			a[i] += 32;
//		}
//	}
//}
//int main(){
//	char a[] = "abcdEFG";
//	print(a);
//	printf("%s\n", a);
//
//	/*int a[10] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11 };
//	int len = sizeof(a) / sizeof(a[0]);
//	printf("%d\n",find(a, 7, len));*/
//	return 0;
//	}
