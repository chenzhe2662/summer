#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲��������� 
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
//��дһ������ʵ��n^k��ʹ�õݹ�ʵ�� 
int num(int n,int k){
	if (k==0){
		return 1;
	}
	return n*num(n,k - 1);
}
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ� 
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
int DigitSum(int n){
	int i;
	int sum = 0;
	for (i = n; i; i/=10){
		sum += i% 10;
	}
	return sum;
}
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
int strlen(char *string){
	if (*string == '\0'){
		return 0;
	}
	return 1 + strlen(string + 1);
}
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 
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
