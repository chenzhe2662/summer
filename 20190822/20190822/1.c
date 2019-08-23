#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(){
	char a[] = "ab,cd.ef-h";
	puts(strtok(a, ",.-"));
	puts(strtok('\0', ",.-"));
	puts(strtok(a, ",.-"));
	puts(strtok(0, ",.-"));
	return 0;
	}
