//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////һ��������ֻ�����������ǳ���һ�Σ�
////�����������ֶ����������Ρ�
////�ҳ����������֣����ʵ�֡�
//void find(int *a, int len){
//	int i,j;
//	for (i = 0; i < len; i++){
//		int count = 0;
//		for (j = 0; j < len; j++){
//			if (a[i] == a[j]){
//				count++;
//			}
//		}
//		if (count == 1){
//			printf("%d\n", a[i]);
//		}
//	}
//}
////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
////��20Ԫ�����Զ�����ˮ��
////���ʵ�֡�
//int  buy(int n){
//	int count;
//	count = n / 2 + n;
//	return count;
//}
////ģ��ʵ��strcpy
//char  *mystrcpy(char *strDestination, const char *strSource){
//	while (*strSource != '\0'){
//		*strDestination = *strSource;
//		strDestination++;
//		strSource++;
//	}
//	*strDestination = *strSource;//��\0�������ַ���
//	return strDestination;
//}
////ģ��ʵ��strcat 
//char  *mystrcat(char *strDestination, const char *strSource){
//	while (*strDestination!='\0'){
//		strDestination++;
//	}
//	while (*strSource != '\0'){
//		*strDestination = *strSource;
//		strDestination++;
//		strSource++;
//	}
//	*strDestination = *strSource;
//	return strDestination;
//}
//int main(){
//	/*int arr[8] = { 2, 3, 5, 7, 5, 3, 2, 9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	find(arr, len);*/
//
//	/*int ret =buy(40);
//	printf("%d\n", ret);*/
//	char a[50];
//	mystrcpy(a, "hello");
//	mystrcat(a, "world");
//	printf("%s\n",a);
//
//	return 0;
//	}
