#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int arr[10] = {0};
//	//arr[4] = 5;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int* p = arr;//首元素的地址
//	//p+i ==> arr+i
//	//*(p+i) == > *(arr+i) ==> arr[i]
//	 //           *(i+arr) ==> i[arr]
//	/*for(i=0; i<sz; i++)
//	{
//	printf("&arr[%d] = %p    <====>   p+%d = %p\n", i, &arr[i], i, p+i);
//	}*/
//	for(i=0; i<sz; i++)
//	{
//		*(p+i) = i;
//	}
//	for(i=0; i<sz; i++)
//	{
//		//printf("%d ", *(p+i));
//		//printf("%d ", arr[i]);//arr[i] == *(arr+i)   i[arr] == *(i+arr)
//		printf("%d ", i[arr]);//a+b;  b+a;
//	}
//	return 0;
//}

//int main()
//{
//	// 	int arr[5];
//	// 	int arr1[3][4];
//	// 	printf("%d\n", sizeof(arr));//20
//	// 	printf("%d\n", sizeof(int [5]));//20
//	//int arr[3][4] = {{1,2,3},{4,5}};
//	int arr[3][4] = { { 1, 2, 3 }, { 2, 3, 4, 5 } };
//	int*p = &arr[0][0];//第一行第一个元素
//	int i = 0;
//	for (i = 0; i<12; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	/*int i = 0;
//	int j = 0;
//	for(i=0; i<3; i++)
//	{
//	for(j=0; j<4; j++)
//	{
//	printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	}
//	}*/
//	/*for(i=0; i<2; i++)
//	{
//	for(j=0; j<4; j++)
//	{
//	printf("%d ", arr[i][j]);
//	}
//	printf("\n");
//	}*/
//	return 0;
//}
//一维数组和二维数组的存放
  

//冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//确定了冒泡排序的趟数
//	for(i=0; i<sz-1; i++)
//	{
//		//int flag = 1;
//		int j = 0;
//		for(j=0; j<sz-i-1; j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				//flag = 0;
//			}
//		}
//		//if(flag == 1)
//		//	break;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = {1,3,5,7,9,2,4,6,8,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);  //元素个数
//	bubble_sort(arr, sz);  
//	print_arr(arr, sz);
//	return 0;
//}
int main()
{
	//数组名
	int arr[10] = { 0 };
	//sizeof(arr)/sizeof(arr[0]);
	printf("%p\n", arr);  //编号1   数组首元素
	printf("%p\n", arr + 1);//和arr差4
	printf("%p\n", &arr[0]); //编号3
	printf("%p\n", &arr);//编号4  134一样   整个数组开始的位置
	printf("%p\n", &arr + 1);  //和&arr差40

	//1. sizeof(arr);//--数组名表示整个数组，所以计算的是整个数组的大小，单位是字节
	//2. &arr; //数组名依然表示整个数组，所以取出的是整个数组的地址
	//除此之外，遇到的所有的数组名都是首元素的地址
	//
	return 0;
}

