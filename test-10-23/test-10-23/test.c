#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int  main()
{
	printf("hello   bit\n");
	//getchar();显示 不是万能
	//system("pause");include <stdlib.h>

	return  0;
}
//%d 十进制的整形
//%c 字符
//%s 字符串
//%p 地址
//%f %1f


//int   main()
//{
	//printf("%d\n",100);
	//printf("%c\n",100);
	//printf("%d\n", sizeof(char));//1字节 =8比特位 字符型
	//printf("%d\n", sizeof(short));//2 短整型
	//printf("%d\n", sizeof(int));//4 整型基本
	//printf("%d\n", sizeof(long));//4/8 长整型
	//printf("%d\n", sizeof(long long));//8/16 双长整型
	//printf("%d\n", sizeof(float));//4 单精度
	//printf("%d\n", sizeof(double));//8 双精度
	//return 0;
//}

//int main() //数据类型用来创建变量  不变的值，C语言中用常量的概念来表示，变得值C语言中用变量来表示。 
//{
	//int weight = 0;
	//short age = 20;
	//float score = 99.5;
//}

//int  a = 20;//全局变量
     //{} 代码块
//int a;//放在（静态区 下） 值为0
//int main()
//{
	//int a=10 ;//局部变量,局部优先  放在（栈区 上）中为堆区，随意值
	//printf("a=%d\n", a);
//	return  0;
//}

//int main()
//{
//	int  num1 = 0;
//	int  num2 = 0;
//	int  sum = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &num1, &num2);
//    sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int  main()
//{
//	{
//		int  a = 10;
//		printf("a=%d\n", a);
	//}
//	//printf("a=%d\n", a); //变量的作用域 全局和局部

	//return  0;
//}

//#define MAX 100
//enum  Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
	//int  main()
	//{
		//2. const修饰的常变量  常属性
		//const int num = 10;
		//num = 20;  错
	   //	printf("%d\n", num);
		  //const int n = 10;
		 //int arr[n] = { 0 };
		 
		  //3.#define 定义的标识符常量
		//int a = MAX;
		//MAX = 200;//err
		//printf("%d\n", a);

		//4.枚举常量  不能改
		//enum  SEX  sex = MALE;
		//printf("%d\n", MALE);
		//printf("%d\n", FEMALE);
		//printf("%d\n", SECRET);
	   // return  0;
	//}

//int main()     //字符串 \0
//{	
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	char arr3[] = { 'a', 'b', 'c','\0' };  //  \0 和0一样
//
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//大于等于3的随机值
//	printf("%d\n", strlen(arr3));//3
//	printf("%d\n", strlen("abc"));//strlen是字符串长度 3
//
//	printf("%s\n", arr1);//abc   
//	printf("%s\n", arr2);//abc乱码
//	printf("%s\n", arr3);// abc  \0 是结束标志,不算字符串内容 不是长度
//	printf("%s\n", "abc");//abc
//	return  0;
//}

//int  main()   //转义字符
//{
	//printf("(are you ok??)\n");
	//printf("(are you ok\?\?)");
	//??) 三字母词
 
	//printf("%s\n", """);err
	//printf("%s\n", "\"");
	//printf("c:\code\test.c\n");
	//printf("c:\\code\\test.c\\n");
	//printf("\a");
	//printf("%d\n", strlen("c:\test\328\test.c"));//14  /32算一个
	//printf("%c\n",'\60'); // \ddd 
//	printf("%c\n", '\x61');// \xdd
//	return 0;
//}
int main()
{
	int a = -1;
	printf("%d\n", ~a);
	return  0;

}



