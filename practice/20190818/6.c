//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
////输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//
//void print(int n){
//	int i, j;
//	for (i = 1; i <= n; i++){
//		for (j = 1; j <= i; j++){
//			printf("%d*%d=%d  ", j, i, i*j);
//		}
//		printf("\n");
//	}
//}
////创建一个数组，
////实现函数init（）初始化数组、
////实现empty（）清空数组、
////实现reverse（）函数完成数组元素的逆置。
////要求：自己设计函数的参数，返回值。
//void init(int *a, int *b,int len){
//		for (int i = 0; i < len; i++){
//			a[i] = b[i];
//		}
//	}
//void empty(int *a,int len){
//	for (int i = 0; i < len; i++){
//		a[i] =0;
//	}
//	}
//void reverse(int *a, int len){
//	int *low = a;
//	int *high =a+ len - 1;
//	while (low < high){
//		int tmp = *low;
//		*low = *high;
//		*high = tmp;
//		low++;
//		high--;
//	}
//}
//void printarr(int *a,int len){
//	for (int i = 0; i < len; i++){
//		printf("%d ", a[i]);
//	}
//	putchar('\n');
//}
//int main(){
//	int b[4] = { 1, 2, 3, 4 };
//	int a[4];
//	int len = sizeof(b) / sizeof(b[0]);
//	init(a, b, len);
//	printarr(a, len);
//	empty(a, len);
//	printarr(a, len);
//	init(a, b, len);
//	reverse(a, len);
//	printarr(a, len);
//	//print(9);
//	return 0;
//	}
