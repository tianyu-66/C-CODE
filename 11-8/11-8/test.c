#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int tmp = 0;
//	printf("num1=%d num2=%d\n", num1, num2);
//	tmp = num1;
//	num1 = num2;
//	num2 = tmp;
//	printf("num1=%d num2=%d\n", num1, num2);
//
//	return 0;
//}

//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	printf("num1=%d num2=%d\n", num1, num2);
//	num1 = num1 + num2;
//	num2 = num1 - num2;
//	num1 = num1 - num2;
//	printf("num1=%d num2=%d\n", num1, num2);
//	return 0;
//}

//int main()   ���Թٿ�����Ŀ�ò��ţ���ΪЧ�ʵ�
//{
//	int num1 = 3;
//	int num2 = 5;
//	printf("num1=%d num2=%d\n", num1, num2);
//	num1 = num1^num2;
//	num2 = num1^num2;
//	num1 = num1^num2;
//	printf("num1=%d num2=%d\n", num1, num2);  //a��b�������Ľ������b���õ����Ϊa����a�����Ϊb��
//	return 0;
//}

//int main()   //��ʮ�������ֵ
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b = 5;
//	int c = 1;
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c=tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


int main()    //���Լ��    a��b�������Լ��������С������
{
	int a = 24;
	int b = 18;
	int c = 0;
	while (c = a%b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}
