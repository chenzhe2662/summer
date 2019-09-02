//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
////对NULL指针的解引用操作
//void test(){
//	int *p = (int *)malloc(INT_MAX / 4);
//	*p = 20;//如果p的值为null，就会有问题
//	free(p);
//}
////对动态开辟空间的越界访问
//void test2(){
//	int i = 0;
//	int *p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p){
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++){
//		*(p + i) = i;//当i=10的时候越界访问
//	}
//	free(p);
//}
////对非动态内存使用free释放
//void test3(){
//	int a = 10;
//	int *p = &a;
//	free(p);
//}
////使用free释放一块动态开辟内存的一部分
//void test4(){
//	int *p = (int *)malloc(100);
//	p++;
//	free(p);//p不再指向动态内存的起始位置
//}
////对一块动态内存多次释放
//void test5(){
//	int *p = (int *)malloc(100);
//	free(p);
//	free(p);//重复释放
//}
////动态开辟内存忘记释放（内存泄漏）
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
