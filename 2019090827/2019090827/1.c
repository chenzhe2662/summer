//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
////��NULLָ��Ľ����ò���
//void test(){
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;//���p��ֵΪnull���ͻ�������
//	free(p);
//}
////�Զ�̬���ٿռ��Խ�����
//void test2(){
//	int i = 0;
//	int *p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p){
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++){
//		*(p + i) = i;//��i=10��ʱ��Խ�����
//	}
//	free(p);
//}
////�ԷǶ�̬�ڴ�ʹ��free�ͷ�
//void test3(){
//	int a = 10;
//	int *p = &a;
//	free(p);
//}
////ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//void test4(){
//	int *p = (int *)malloc(100);
//	p++;
//	free(p);//p����ָ��̬�ڴ����ʼλ��
//}
////��һ�鶯̬�ڴ����ͷ�
//void test5(){
//	int *p = (int *)malloc(100);
//	free(p);
//	free(p);//�ظ��ͷ�
//}
////��̬�����ڴ������ͷţ��ڴ�й©��
//void test6(){
//	int *p = (int *)malloc(100);
//	if (NULL != p){
//		*p = 20;
//	}
//	}
//int main(){
//	test6();
//
//
//
//	/*int num = 0;
//	scanf("%d", &num);
//	int *ptr = NULL;
//	ptr = (int*)malloc(num*sizeof(int));
//	if (NULL != ptr){
//		int i = 0;
//		for (i = 0; i < num; i++){
//			*(ptr + i) = 0;
//		}
//	}
//	free(ptr);
//	ptr = NULL;
//	*/return 0;
//	}
