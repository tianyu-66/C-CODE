#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
//int  main()
//{
//	int input = 0;
//	printf("坚持运动\n");
//	printf("你能每天坚持运动吗\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好身材\n");
//	}
//	else if (input == 0)
//	{
//		printf("肥胖\n");
//	}
//	else
//	{
//		printf("hehe");
//	}
//	return 0;
//}
//int main()
//{
//	int  line = 0;
//	printf("加入比特\n");
//	while (line < 200)
//	{
//		printf("写代码\n");
//		line++;
//	}
//	if (line == 200)
//	{
//		printf("找工作\n");
//	}
//	return 0;
//}
//for
//do  while

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//	//return  x+y;
//}
//int  main()
//{
//	int  num1 = 0;
//	int  num2 = 0;
//	int  sum = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1,num2);  //()函数调用
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//数组
//	int a = 1;
//	int b = 2;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};//下标0开始
//	int  i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[6]);
//
//	//char arr[20] = { 0 }; //[]下标引用
//	return 0;
//}

//int main()
//{
//	//int a = 20;//00000000 00000000 00000000 00010100
//	//int b = a >> 2;
//	//printf("%d\n", b);
//	//& | ^ <<  >> ~
//	int a = 3;//0011
//	int b = 5;//0101
//	int c = a&b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//		int a = -1;
//		//原码10000000000000000000000000000001
//		//反码11111111111111111111111111111110
//		//补码11111111111111111111111111111111 存在内存的值
//		printf("%d\n", ~a);//0
//		return  0;
//}

//int  main()
//{
//	int a = 10;
//	//int b = a++;         //先使用再加加   b= a--
//	//printf("a=%d\n", a);//a=11            a=9
//	//printf("b=%d\n", b);//b=10            b=10
//
//	int b = ++a;         //先++再使用       b=--a
//	printf("a=%d\n", a);//a=11              a=9
//	printf("b=%d\n", b);//b=11              b=9
//	return 0;
//}

//int main()
//{
//	int a=(int)3.14； //强制类型转换
//	//int a = int（3.14）；//err
//	return 0；
//}

//int  main()
//{
	//int a = 10;
	//int b = 20;
	//int max = 0;
	//if (a > b)
	//	max = a;
	//else
	//	max = b;
 //  //max=(a>b?a:b);//与上等价  条件操作符

//	int a = 3;
//	int b = 5;
//	int c = 10;
//	int d= (b=a+3,a=b-5,c=c+b);//从左向右计算 最后一个值
//	printf("%d\n", d);  //16
//	return 0;
//}

//extern int  g_val;  //用来声明符号的
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//static
//1. 修饰局部变量-静态局部变量 改变了局部变量生命周期
//2. 修饰全局变量-静态全局变量 改变了全局变量作用域，只能在所在的源文件作用 链接属性
//3. 修饰函数-静态函数         和2一样（由外部转到内部）
//void test()
//{
//	static int a = 0;//1到10
//	//int a = 0;//十个1
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int*p = &a;//指针变量 存放地址
//	*p = 20;//解引用操作  *p通过地址找到a的对象
//	printf("%p\n", &a);
//	printf("%d\n", a);//20
//	return 0;
//}

int main()
{
	int a = 0;
	printf("%d%d%d%d\n", a++, ++a, a++, ++a);
	printf("%d\n", a);
	return 0;
}