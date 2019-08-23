//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////一个数组中只有两个数字是出现一次，
////其他所有数字都出现了两次。
////找出这两个数字，编程实现。
//void find(int *a, int len){
//	int i,j;
//	for (i = 0; i < len; i++){
//		int count = 0;
//		for (j = 0; j < len; j++){
//			if (a[i] == a[j]){
//				count++;
//			}
//		}
//		if (count == 1){
//			printf("%d\n", a[i]);
//		}
//	}
//}
////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
////给20元，可以多少汽水。
////编程实现。
//int  buy(int n){
//	int count;
//	count = n / 2 + n;
//	return count;
//}
////模拟实现strcpy
//char  *mystrcpy(char *strDestination, const char *strSource){
//	while (*strSource != '\0'){
//		*strDestination = *strSource;
//		strDestination++;
//		strSource++;
//	}
//	*strDestination = *strSource;//将\0赋给新字符串
//	return strDestination;
//}
////模拟实现strcat 
//char  *mystrcat(char *strDestination, const char *strSource){
//	while (*strDestination!='\0'){
//		strDestination++;
//	}
//	while (*strSource != '\0'){
//		*strDestination = *strSource;
//		strDestination++;
//		strSource++;
//	}
//	*strDestination = *strSource;
//	return strDestination;
//}
//int main(){
//	/*int arr[8] = { 2, 3, 5, 7, 5, 3, 2, 9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	find(arr, len);*/
//
//	/*int ret =buy(40);
//	printf("%d\n", ret);*/
//	char a[50];
//	mystrcpy(a, "hello");
//	mystrcat(a, "world");
//	printf("%s\n",a);
//
//	return 0;
//	}
