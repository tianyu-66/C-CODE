#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
//int  main()
//{
//	int input = 0;
//	printf("����˶�\n");
//	printf("����ÿ�����˶���\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("�����\n");
//	}
//	else if (input == 0)
//	{
//		printf("����\n");
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
//	printf("�������\n");
//	while (line < 200)
//	{
//		printf("д����\n");
//		line++;
//	}
//	if (line == 200)
//	{
//		printf("�ҹ���\n");
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
//	printf("����������������:>");
//	scanf("%d%d", &num1, &num2);
//	sum = Add(num1,num2);  //()��������
//	printf("sum=%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//����
//	int a = 1;
//	int b = 2;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};//�±�0��ʼ
//	int  i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[6]);
//
//	//char arr[20] = { 0 }; //[]�±�����
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
//		//ԭ��10000000000000000000000000000001
//		//����11111111111111111111111111111110
//		//����11111111111111111111111111111111 �����ڴ��ֵ
//		printf("%d\n", ~a);//0
//		return  0;
//}

//int  main()
//{
//	int a = 10;
//	//int b = a++;         //��ʹ���ټӼ�   b= a--
//	//printf("a=%d\n", a);//a=11            a=9
//	//printf("b=%d\n", b);//b=10            b=10
//
//	int b = ++a;         //��++��ʹ��       b=--a
//	printf("a=%d\n", a);//a=11              a=9
//	printf("b=%d\n", b);//b=11              b=9
//	return 0;
//}

//int main()
//{
//	int a=(int)3.14�� //ǿ������ת��
//	//int a = int��3.14����//err
//	return 0��
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
 //  //max=(a>b?a:b);//���ϵȼ�  ����������

//	int a = 3;
//	int b = 5;
//	int c = 10;
//	int d= (b=a+3,a=b-5,c=c+b);//�������Ҽ��� ���һ��ֵ
//	printf("%d\n", d);  //16
//	return 0;
//}

//extern int  g_val;  //�����������ŵ�
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//static
//1. ���ξֲ�����-��̬�ֲ����� �ı��˾ֲ�������������
//2. ����ȫ�ֱ���-��̬ȫ�ֱ��� �ı���ȫ�ֱ���������ֻ�������ڵ�Դ�ļ����� ��������
//3. ���κ���-��̬����         ��2һ�������ⲿת���ڲ���
//void test()
//{
//	static int a = 0;//1��10
//	//int a = 0;//ʮ��1
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
//	int*p = &a;//ָ����� ��ŵ�ַ
//	*p = 20;//�����ò���  *pͨ����ַ�ҵ�a�Ķ���
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