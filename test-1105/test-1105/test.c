#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()   //ָ��
//{
//	int a = 0x11223344;//4
//	//printf("%p\n", &a);
//	int * p = &a;//ָ�����
//	*p = 20;//�����ò���
//	printf("%d\n", a);
//	//char ch = 'w';
//	//char * pc = &ch;
//	return 0; 
//}
//int main()
//{
//	char ch = 'w';
//	int a = 10;
//	double d = 3.14;
//	char* pc = &ch;
//	int* pa = &a;
//	double* pd = &d;
//	printf("%d\n", sizeof(ch));//1
//	printf("%d\n", sizeof(a)); //4
//	printf("%d\n", sizeof(d)); //8
//
//	printf("%d\n", sizeof(pc));//4
//	printf("%d\n", sizeof(pa)); //4
//	printf("%d\n", sizeof(pd)); //4
//	//64  8 8 8ָ���С         32 4ָ���С
//	return 0;
//}

//�Զ�������-int-float  �ṹ��
//struct PeoInfo
//{
//	char name[20];
//	short age;
//	char sex[10];
//	short hight;
//	float weight;
//};
//int main()
//{
//	struct PeoInfo p = {"����", 20, "��", 170, 88.6f};
//	struct PeoInfo* ptr = &p;
//	printf("%s %d\n", p.name, p.age);  //.�ṹ��Ա������
//	printf("%s %d\n", (*ptr).name, (*ptr).age);
//	printf("%s %d\n", ptr->name, ptr->age);
//	return 0;
//}

// if elseѭ�����
//int main()
//{
//	int age = 8;
//	if (age < 16)
//	{
//		printf("����\n");  //if ����ֻ�ܸ�һ�����
//		printf("����ȥ����\n");
//	}
//	else if (age >= 16 && age <= 22)
//		printf("����\n");
//	else if (age >= 22 && age <= 40)
//		printf("׳��\n");
//	else if (age >= 40 && age <= 60)
//		printf("������\n");
//	else
//		printf("�ϲ���\n");
//
//	/*if (age >= 18)
//		printf("����\n");
//	else
//		printf("δ����\n");
//*/
//	return 0;
//}

//int main()  //������ ������
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	   if (b == 2)
//		  printf("hehe\n");
//	   else
//		  printf("haha\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//	}
//	/*for (i = 1; i <= 100; i+=2)
//	{
//			printf("%d ", i);
//	}*/
//	return 0;
//}

//int main()
//{
//	int day = 4;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");  //case �� defaultû��˳��
//		break;
//	}
//}

//int main()
//{
//	int day = 4;
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		case 1:n++;
//		case 2:m++; n++; break;
//		}//��break�������� 4  3
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n); //5 3
//	return 0;
//}

//int main()
//{
//	while(1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

int main()   
{
	int i = 1;
	while(i<=10)
	{
		if (i == 5)
			break;
			//continue;//
		printf("%d ", i);
		i++;
	}
	return 0;
}

//int main()
//{
//	/*int ch = getchar();
//	putchar(ch);
//	ch = getchar();
//	putchar(ch);
//	ch = getchar();
//	putchar(ch);*/
//	int ch = 0;
//	////EOF-end of file
//	//while((ch=getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	//while((ch=getchar()) != EOF)
//	//{
//	//	if(ch<'0' || ch>'9')
//	//		continue;
//	//	putchar(ch);
//	//}
//
////	while((ch=getchar()) != EOF)
////	{
////		if(ch>='a' && ch<='z')
////		{
////			putchar(ch-32);
////		}
////		else
////		{
////			putchar(ch);
////		}
////	}
////	return 0;
////}
//
//int main()
//{
//	int i = 1;//��ʼ��
//	while(i<=10)//�ж�
//	{
//		printf("%d ", i);
//		i++;//����
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;//��ʼ��
//	for(i=1; i<=10; i++)
//	{
//		if(i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for(i=0; i<10; i++)
//	{
//		if(i==5)
//			printf("hehe");
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i=0; i<=11; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//1
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//2
//	for (i = 0; i <= 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}