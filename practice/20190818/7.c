#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//递归和非递归分别实现求第n个斐波那契数。 
int  fib(int n){
	if (n <= 2){
		return 1;
	}
	else{
		return fib(n-1) + fib(n - 2);
	}
}
int  fib_1(int n){
	int i;
	int  f3;
	int f1 = 1;
	int f2=1;
	for (i = 2; i < n; i++){
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
void printnum(int n){
		for (int i = 0; i < n; i++){
			printf("%d ", i);
		}
		putchar('\n');
	}
//编写一个函数实现n^k，使用递归实现 
int num(int n,int k){
	if (k==0){
		return 1;
	}
	return n*num(n,k - 1);
}
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和， 
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
int DigitSum(int n){
	int i;
	int sum = 0;
	for (i = n; i; i/=10){
		sum += i% 10;
	}
	return sum;
}
//递归和非递归分别实现strlen
int strlen(char *string){
	if (*string == '\0'){
		return 0;
	}
	return 1 + strlen(string + 1);
}
//编写一个函数 reverse_string(char * string)（递归实现） 
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
void reverse_string(char * string){
	char *left=string;
	char *right=string +strlen(string)-1;
	while (left < right){
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
//递归和非递归分别实现求n的阶乘 
int mul(int n){
	if (n == 1){
		return 1;
	}
	return  n*mul(n - 1);
}
int main(){

	int ret =mul(5);
	printf("%d ", ret);
	/*char a[] = "abcdef";
	int ret=strlen(a);
	printf("%d ", ret);*/
	/*char a[] = "abcdef";
	reverse_string(a);
	puts(a);*/
	/*int ret = DigitSum(1729);
	printf("%d ", ret);*/
	/*int ret = num(2,10 );
	printf("%d ", ret);*/
	//int ret = fib(8);
	/*int ret = fib_1(8);
	printf("%d ", ret);*/
	return 0;
	}
