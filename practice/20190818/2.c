//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////�����������α�����ֵ��������ֵ�����ݽ��н���.
//void swap(int* a, int* b){
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//��10 �����������ֵ�� 
//int max(int*a){
//	int i;
//	int max = a[0];
//	for (i = 1; i < 10; i++){
//		if (a[i]>max){
//			max = a[i];
//		}
//	}
//	return max;
//}
//�����������Ӵ�С�����
//void sort(int *a){
//	int i, j;
//	for (i = 0; i < 9; i++){
//		for (j = 0; j < 9 - i ; j++){
//			if (a[j] < a[j + 1]){
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print(int *a ){
//	for (int i = 0; i < 10; i++){
//		printf("%d ", a[i]);
//	}
//}
//�������������Լ���� 
//int num1(int m,int n){
//	if (m < n){
//		swap(&m, &n);
//	}
//	if (m%n== 0){
//		return n;
//	}
//	return num1(m, m%n);
//}
//int main(){
//	int ret=num1(14, 21);
//	printf("%d", ret);
//	//int a[10] = { 1, 3, 5, 7, 9, 8, 6, 4, 2, 0 };
//	//sort(a);
//	//print(a);
//	/*int ret = max(a);
//	printf("%d", ret);*/ 
//
//	/*int a = 10;
//	int b = 20;
//	swap(&a,&b);
//	printf("a=%d,b=%d", a, b);*/
//	return 0;
//	}
