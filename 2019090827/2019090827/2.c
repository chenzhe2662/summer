#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//����һ
void GetMemory(char*p){
	p = (char*)malloc(100);
}
void test(void){
	char*str = NULL;
	GetMemory(str);
	strcpy(str, "hello");
	puts(str);
}
//���Զ�
char *GetMemory(void){
	char p[] = "hello world";
	return p;
}
void test(void){
	char *str = NULL;
	str=GetMemory();
	puts(str);
}
//������
void GetMemory(char** p,int num){
	*p = (char*)malloc(100);
}
void test(void){
	char*str = NULL;
	GetMemory(&str,100);
	strcpy(str, "hello");
	puts(str);
}
//������
void test(void){
	char*str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL){
		strcpy(str, "world");
		puts(str);
	}
}
int main(){


	return 0;
	}
