//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////дһ���������ز����������� 1 �ĸ���
////���磺 15 0000 1111 4 �� 1
////����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	int count=0;
//	while (value != 0)
//	{
//		count++;
//		value = value&(value - 1);
//
//	}
//	printf("%d\n", count);
//	return count;
//	// ���� 1��λ�� 
//}
///*��ȡһ�������������������е�ż��λ������λ�� 
//�ֱ�������������С�*/
//void num(int num)
//{
//	int i;
//	printf("����λ��");
//	for (i = 31; i >= 0; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
////���һ��������ÿһλ��
//int num1(unsigned int n)
//{
//	if (n > 1)
//	{
//		num1(n / 2);
//	}
//	printf("%d ", n % 2);
//	return n;
//}
//
//int num2( int x,  int y)
//{
//	int n = x^y;
//	int count = 0;
//	while (n != 0)
//	{
//		count++;
//		n = n&(n - 1);
//	}
//	printf("%d\n", count);
//	return count;
//}
//
//
//
//int main()
//{
//	num(-2);
//	//num1(105);//1101001
//	//num2(1999,2299);
//	//count_one_bits(-1);
//	return 0;
//}