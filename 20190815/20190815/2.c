#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int  mystrlen(char *a){
	
	if (*a == '\0'){
		return 0;
	}
	return 1 + mystrlen(a + 1);
}
void bubble(int* a,int len )
{
	int i, j;
	for (i = 0; i < len-1; i++){
		for (j = 0; j <len - i - 1; j++){
			if (a[j]>a[j + 1]){
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
int main(){
	int  b[5] = { 1, 3, 5, 7, 2 };
	int len = sizeof(b) / sizeof(b[0]);
	bubble(b, len);
	int i;
	for (i = 0; i < len; i++){
		printf("%d ", b[i]);
	}

	/*char *a = "hello";
	printf("%d\n",mystrlen(a));
*/
	return 0;
	}
