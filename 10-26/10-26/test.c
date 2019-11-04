#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()  //100到200素数
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{ 
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}	
//	}
//	printf("\n");
//	printf("count=%d\n", count);
//	return 0;
//}

//

int main() //1000到2000闰年
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//能被4整除并且不能被100整除
		//能被400整除
		if (((year % 4 == 0)&&(year % 100 != 0))||(year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}
		/*if (year % 4 == 0)
		{
		 if (year % 100 != 0)
		{
		printf("%d", year);
		count++;
		}
		}
		if (year % 400 == 0)
		{
		printf("%d", year);
		count++;
		}*/
	}
	    printf("\n");
		printf("count=%d\n", count);
		return 0;
	}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//			printf("%d*%d=%-3d", i, j, i*j);
//		printf("\n");
//	}
//	return 0;
//}
//	