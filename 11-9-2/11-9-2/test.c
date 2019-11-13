#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

//int main()  //strcpy函数使用字符串拷贝
//{
//	char arr1[20] = "xxxxxx";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()   //memset函数使用
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 6);
//	printf("%s\n", arr);
//	return 0;
//}

//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if((y%4==0 && y%100!=0) || (y%400==0))
//		return 1;
//	else
//		return 0;
//}

//int is_leap_year(int y)
//{
//	return ((y%4==0 && y%100!=0) || (y%400==0));
//}

//int main()
//{
//	int year=0;
//	for(year=1000; year<=2000; year++)
//	{
//		//判断year是否为闰年
//		if(is_leap_year(year)==1)
//			printf("%d ", year);
//	}
//	return 0;
//}


//int is_prime(int n)
//{
//	int i = 0;
//	for(i=2; i<=sqrt(n); i++)
//	{
//		if(n%i == 0)
//			return 0;
//	}
//	return 1;//素数
//}
//int main()
//{
//	int i = 0;
//	for(i=100; i<=200; i++)
//	{
//		//判断i是否为素数
//		if(is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//void Add(int* pn)
//{
//	(*pn)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//4321
//	return 0;
//}

