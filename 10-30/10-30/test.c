#define _CRT_SECURE_NO_WARNINGS
# include<stdio.h>

int main()
{
	int a = 0x11223344;
	//printf("%p\n", &a);
	int * p = &a;        //     ָ�����         a�ĵ�ַ
    *p = 20;             //  *a�����ò���    ��ַ��ֵΪ20
	printf("%d\n", a);
	return 0;
}