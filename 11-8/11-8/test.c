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

//int main()   面试官考，项目用不着，因为效率低
//{
//	int num1 = 3;
//	int num2 = 5;
//	printf("num1=%d num2=%d\n", num1, num2);
//	num1 = num1^num2;
//	num2 = num1^num2;
//	num1 = num1^num2;
//	printf("num1=%d num2=%d\n", num1, num2);  //a和b异或产生的结果再与b异或得到结果为a，与a异或结果为b。
//	return 0;
//}

//int main()   //求十个数最大值
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


int main()    //最大公约数    a成b除以最大公约数就是最小公倍数
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
