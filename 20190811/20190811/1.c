//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
/////*unsigned int reverse_bit(unsigned int value); 
////��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��*/
//unsigned int reverse_bit(unsigned int value)
//{
//	int i;
//	unsigned int a, b;
//	unsigned int sum = 0;
//	printf("%d�Ķ�����Ϊ��\n", value);
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d ", (value >> i) & 1);
//	}
//	printf("\n");
//	for (i = 0; i < 32; i++)
//	{
//			a = value & 1;
//			b=a<< (31 - i);
//			sum += b;
//			value = value >> 1;
//	}
//	printf("%u�Ķ�����Ϊ��\n", sum);
//	for (i = 31; i >= 0; i--)
//	{
//		printf("%d ", (sum >> i) & 1);
//	}
//	return sum;
//}
////
//////��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ�� 
////int avg(int a, int b)
////{
////	int sum;
////	sum = a + b;
////	return sum >> 1;
////}
/////*
////һ��������ֻ��һ�����ֳ�����һ�Ρ�
////�����������ֶ��ǳɶԳ��ֵġ�
////���ҳ�������֡���ʹ��λ���㣩
////*/
////void find(int *a,int len)
////{
////	int i;
////	int ret=0;
////	for (i = 0; i < len; i++)
////	{
////		ret =ret^a[i];
////	}
////	printf("%d\n", ret);
////}
/////*��һ���ַ����������Ϊ:"student a am i", 
////���㽫��������ݸ�Ϊ"i am a student". 
////Ҫ�� 
////����ʹ�ÿ⺯���� 
////ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ��� */
////int strlen(char *p)
////{
////	int count = 0;
////	if (*p == '\0')
////	{
////		return 0;
////	}
////	else
////	{
////		return 	1 + strlen(p + 1);
////	}
////}
////void resverse(char* sta, char* end)//�û�����
////{
////	while (sta < end)
////	{
////		char tem = *sta;
////		*sta = *end;
////		*end = tem;
////		sta++;
////		end--;
////	}
////}
////void word(char *str)  //�ֵ��ʺ���
////{
////	char *sta = str;
////	char *end = str + strlen(str) - 1;//�׵�ַ���ַ�������
////	resverse(sta, end);//��������
////	char *p = str;
////	while (*p != '\0')
////	{
////		char  *start = p;
////		while (*p != ' '&&*p != '\0')
////		{
////			p++;
////		}
////		resverse(start, p - 1);//��������
////		if (*p == ' ')
////		{
////			p++;
////		}
////	}
////}
////
//int main()
//{
//
////	    char b[] = "i am a student";
////		puts(b);
////		word(b);
////		puts(b);
////	/*int a[5] = { 1, 30, 46,30,1};
////	int len = sizeof(a) / sizeof(a[0]);
////	find(a, len);*/
////	//printf("%d\n",avg(10, 20));
//	//reverse_bit(25);
//	return 0;
//}