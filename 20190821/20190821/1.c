#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*在屏幕上打印杨辉三角。 
1 
1 1 
1 2 1 
1 3 3 1 */
void yang(int n){
	int a[100][100];
	a[0][0] = 1;
	int i, j;
	for (i = 0; i <= n; i++){
		a[i][0] = 1;
		for (j = 0; j <= i; j++){
			if (i == j){
				a[i][j] = 1;
			}
			else if (j == 0){
				a[i][j] = 1;
			}
			else{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i <= n; i++){
		for (j = 0; j <= i; j++){
			printf("%-3d  ", a[i][j]);
		}
		putchar('\n');
	}
}
////写一个函数返回参数二进制中 1 的个数 
////比如： 15 0000 1111 4 个 1
////程序原型：
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	for (int i = value; i; i /= 2){
//		count += i % 2;
//	}
//	return count;
//}
////编程实现： 
////两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
////输入例子 :
////1999 2299
////输出例子 : 7
//int num(unsigned int m, unsigned int n){
//	unsigned int ret = 0;
//		ret=m^n;
//		return count_one_bits(ret);
//}
//int main()
//{
//	int ret = num(1999, 2299); 
//	printf("%d\n", ret);
//	/*int ret=count_one_bits(15);
//	printf("%d\n", ret);*/
//		//yang(10);
//		return 0;
//}