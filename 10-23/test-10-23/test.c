#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int  main()
{
	printf("hello   bit\n");
	//getchar();��ʾ ��������
	//system("pause");include <stdlib.h>

	return  0;
}
//%d ʮ���Ƶ�����
//%c �ַ�
//%s �ַ���
//%p ��ַ
//%f %1f


//int   main()
//{
	//printf("%d\n",100);
	//printf("%c\n",100);
	//printf("%d\n", sizeof(char));//1�ֽ� =8����λ �ַ���
	//printf("%d\n", sizeof(short));//2 ������
	//printf("%d\n", sizeof(int));//4 ���ͻ���
	//printf("%d\n", sizeof(long));//4/8 ������
	//printf("%d\n", sizeof(long long));//8/16 ˫������
	//printf("%d\n", sizeof(float));//4 ������
	//printf("%d\n", sizeof(double));//8 ˫����
	//return 0;
//}

//int main() //��������������������  �����ֵ��C�������ó����ĸ�������ʾ�����ֵC�������ñ�������ʾ�� 
//{
	//int weight = 0;
	//short age = 20;
	//float score = 99.5;
//}

//int  a = 20;//ȫ�ֱ���
     //{} �����
//int a;//���ڣ���̬�� �£� ֵΪ0
//int main()
//{
	//int a=10 ;//�ֲ�����,�ֲ�����  ���ڣ�ջ�� �ϣ���Ϊ����������ֵ
	//printf("a=%d\n", a);
//	return  0;
//}

//int main()
//{
//	int  num1 = 0;
//	int  num2 = 0;
//	int  sum = 0;
//	printf("����������������:>");
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
//	//printf("a=%d\n", a); //������������ ȫ�ֺ;ֲ�

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
		//2. const���εĳ�����  ������
		//const int num = 10;
		//num = 20;  ��
	   //	printf("%d\n", num);
		  //const int n = 10;
		 //int arr[n] = { 0 };
		 
		  //3.#define ����ı�ʶ������
		//int a = MAX;
		//MAX = 200;//err
		//printf("%d\n", a);

		//4.ö�ٳ���  ���ܸ�
		//enum  SEX  sex = MALE;
		//printf("%d\n", MALE);
		//printf("%d\n", FEMALE);
		//printf("%d\n", SECRET);
	   // return  0;
	//}

//int main()     //�ַ��� \0
//{	
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	char arr3[] = { 'a', 'b', 'c','\0' };  //  \0 ��0һ��
//
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//���ڵ���3�����ֵ
//	printf("%d\n", strlen(arr3));//3
//	printf("%d\n", strlen("abc"));//strlen���ַ������� 3
//
//	printf("%s\n", arr1);//abc   
//	printf("%s\n", arr2);//abc����
//	printf("%s\n", arr3);// abc  \0 �ǽ�����־,�����ַ������� ���ǳ���
//	printf("%s\n", "abc");//abc
//	return  0;
//}

//int  main()   //ת���ַ�
//{
	//printf("(are you ok??)\n");
	//printf("(are you ok\?\?)");
	//??) ����ĸ��
 
	//printf("%s\n", """);err
	//printf("%s\n", "\"");
	//printf("c:\code\test.c\n");
	//printf("c:\\code\\test.c\\n");
	//printf("\a");
	//printf("%d\n", strlen("c:\test\328\test.c"));//14  /32��һ��
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



