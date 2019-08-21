//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//在屏幕上输出以下图案： 
//void print(int n){
//	int i, j;
//	for (i = 1; i <=n; i++){
//		for (j = 1; j<=n-i; j++){
//			putchar(' ');
//		}
//		for (j = 1; j <= 2 * i - 1; j++){
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	for (i = n-1; i >0; i--){
//		for (j = 1; j <= n - i; j++){
//			putchar(' ');
//		}
//		for (j = 1; j <=2 * i - 1; j++){
//			putchar('*');
//		}
//		putchar('\n');
//	}
//}
//求出0～999之间的所有“水仙花数”并输出。 
//void num(int n){
//	int flag = 10;
//	int i,j;
//	int sum = 0;
//	int count = 1;
//		for (i = 0; i < n; i++){
//		if (i == flag){
//			count++;
//			flag *= 10;
//		}
//		for (j = i; j ; j/=10){
//			sum +=(int) pow(j % 10, count);
//		}
//		if (sum == i){
//			printf("%d ", sum);
//		}
//		sum = 0;
//		}
//}
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字， 
//int sum(int n,int a){
//	int i;
//	int sum = 0;
//	int mul=0;
//	for (i = 0; i < n; i++){
//		mul= mul * 10+a ;
//		sum += mul;
//	}
//	return sum;
//}
//int main(){
//	int ret = sum(5, 2);
//	printf("%d\n", ret);
//	//num(999999);
//	//print(7);
//	return 0;
//	}
