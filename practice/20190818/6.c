//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
////����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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
////����һ�����飬
////ʵ�ֺ���init������ʼ�����顢
////ʵ��empty����������顢
////ʵ��reverse���������������Ԫ�ص����á�
////Ҫ���Լ���ƺ����Ĳ���������ֵ��
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
