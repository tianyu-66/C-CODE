#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>

int main()
{
	int a = 0x11223344;
	//printf("%p\n", &a);
	int * p = &a;        //     指针变量         a的地址
    *p = 20;             //  *a解引用操作    地址赋值为20
	printf("%d\n", a);
	return 0;
}