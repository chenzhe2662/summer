#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//unsigned int reverse_bit(unsigned int value); 
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832
unsigned int reverse_bit(unsigned int value){
	unsigned int sum = 0;
	for (int i = 0; i < 32; i++){
		sum = sum * 2 + value % 2;
		value /= 2;
	}
	return sum;
}
//��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ��
int avg(int a, int b){
	return (a + b) >> 1;
}
//���ʵ�֣� 
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡�
int find(int *a,int len){
	int ret = 0;
	for (int i = 0; i < len; i++){
		ret ^= a[i];
	}
	return ret;
}
//��һ���ַ����������Ϊ:"student a am i", 
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
