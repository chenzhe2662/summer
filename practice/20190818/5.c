//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////.д����������������������в�����Ҫ�����֣� 
////�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�
//int find(int *a,int n,int len){
//	int low = 0;
//	int high = len - 1;
//	int mid;
//	int i;
//	for (i = 0; i < len; i++){
//		mid = (low + high) / 2;
//		if (n>a[mid]){
//			low = mid + 1;
//		}
//		else if (n<a[mid]){
//			high = mid - 1;
//		}
//		else if (n = a[mid]){
//			return mid;
//		}
//	}
//	return -1;
//}
////��дһ�����򣬿���һֱ���ռ����ַ���
////�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
////������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
////��������ֲ������
//void print(char *a){
//	int i;
//	for (i = 0; a[i]; i++){
//		if (a[i]<='z'&&a[i]>='a'){
//			a[i] -= 32;
//		}
//		else if (a[i]<'Z'&&a[i]>'A'){
//			a[i] += 32;
//		}
//	}
//}
//int main(){
//	char a[] = "abcdEFG";
//	print(a);
//	printf("%s\n", a);
//
//	/*int a[10] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11 };
//	int len = sizeof(a) / sizeof(a[0]);
//	printf("%d\n",find(a, 7, len));*/
//	return 0;
//	}
