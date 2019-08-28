//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//struct s1{
//	char s1;
//	int i;
//	char c2;
//};
///*
//s1为char型，占一个字节对齐数为1，i为int型，占四个字节，对齐数为4，所以
//s1空出三个位置。加上 c2占一个字节，一共9个字节。最大对齐数为4；
//故为4的整数倍12
//*/
//struct s2{
//	char c1;
//	char c2;
//	int i;
//};
///*同理，c1占一个字节，c1占一个字节。对齐数都为1；
//i占4个字节所以c1加c2空出2个字节，一共占8字节
//最大对齐数为4，故大小为8；*/
//struct s3 {
//	double  d;
//	char c;
//	int i;
//};
///*    d占8字节，c占一字节但需空出三字节让i放在他的整数倍上，一共占
//16个字节。最大对齐数为8，故结构体大小为16；
//*/
//struct s4{
//	char c1;
//	struct s3 c3;
//	double d;
//};
///*  结构体嵌套；c1占1个字节 c3的大小为16，对齐数为8；
//所以c1空出7个字节让c3放到整数倍处，加上d占8字节一共为
//32；最大对齐数为8，故结构体大小为32；
//*/
//int main(){
//	printf("%d\n", sizeof(struct s1));//12
//	printf("%d\n", sizeof(struct s2));//8
//	printf("%d\n", sizeof(struct s3));//16
//	printf("%d\n", sizeof(struct s4));//32
//	return 0;
//	}
