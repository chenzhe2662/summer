#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//unsigned int reverse_bit(unsigned int value); 
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
unsigned int reverse_bit(unsigned int value){
	unsigned int sum = 0;
	for (int i = 0; i < 32; i++){
		sum = sum * 2 + value % 2;
		value /= 2;
	}
	return sum;
}
//不使用（a+b）/2这种方式，求两个数的平均值。
int avg(int a, int b){
	return (a + b) >> 1;
}
//编程实现： 
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。
int find(int *a,int len){
	int ret = 0;
	for (int i = 0; i < len; i++){
		ret ^= a[i];
	}
	return ret;
}
//有一个字符数组的内容为:"student a am i", 
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。
void reverse(char*sta,char *end){
	while (sta < end){
		char tmp = *sta;
		*sta = *end;
		*end = tmp;
		sta++;
		end--;
	}
}
void reverseString(char *str){
	int i;
	char *sta = str;
	char *end;
	for ( i = 0; str[i]; i++){
		if (str[i] == ' '){
			end = str + i - 1;
			reverse(sta, end);
			sta = str + i + 1;
		}
	}
		end = str+i-1;
		reverse(sta, end);
		reverse(str, end);
}
int main(){
	char a[] = "student a am i";
	reverseString(a);
	puts(a);
	/*int a[5] = { 1, 2, 3, 2, 1 };
	int ret = find(a, 5);
	printf("%d\n", ret);*/
	/*int ret = avg(10,20);
	printf("%d\n", ret);*/
	/*unsigned int ret=reverse_bit(25);
	printf("%u\n", ret);*/
	return 0;
	}
