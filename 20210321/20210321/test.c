//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////struct �ṹ��ؼ���
////Stu �ṹ���ǩ
////struct Stu �ṹ������
//struct Stu
//{
//	//��Ա����
//	//��ʱ��ռ���ڴ�ռ� ������int, int a=10;
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ�����
////һ�㲻ʹ�� �����о����ٵ�ʹ��ȫ�ֱ���
//
////typedef�Ǹ�struct Stu�������˸����ֽ�Stu
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//Stu�����Ͳ�ͬ�������s1,s2,s3���� ��Ϊ��typedef
//
//int main()
//{
//	struct Stu s1 = {"����",20,"15135751894","Ů"};//s�Ǿֲ��ṹ�����
//	Stu s2 = { "����", 21"19829265459","��" };
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}


//struct S 
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", { 100, 'w', "hello world", 3.14 }, arr };
//	printf("%s\n",t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%s\n", t.pc);
//	return 0;
//}


//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//
//void print1(Stu tmp)
//{
//	printf("%s\n", tmp.name);
//	printf("%d\n", tmp.age);
//	printf("%s\n", tmp.tele);
//	printf("%s\n", tmp.sex);
//}
//
//void print2(Stu* ps)
//{
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->tele);
//	printf("%s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "����", 20, "15135751894", "Ů" };
//	print1(s);
//	print2(&s);
//	return 0;
//}


////����һ���ṹ������
////����һ��ѧ������ ����ͨ��ѧ������������ѧ������(����)
//
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//ȫ�ֽṹ�����
//
//struct Stu s3;//ȫ�ֽṹ�����
//
//int main()
//{
//	//�����ֲ��ṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}

//struct  
//{
//	int a;
//	char b;
//}sa;
//
//struct  
//{
//	int a;
//	char b;
//}*psa;
//
//int main()
//{
//	psa = &sa;
//	return 0;
//}


//struct Node
//{
//	int data;
//	struct Node n;//��ݹ� ����
//};
//int main()
//{
//	return 0;
//}
//
//
//
//struct Node
//{
//	int data;
//	struct Node* next;//4/8 
//	//����:������ ָ����
//};
//int main()
//{
//	return 0;
//}



//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}


//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//}



//#include <stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	//offsetof(structname,membername);
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//}




////λ�� λ-������λ
//struct S
//{
//	int a : 2;//2��bitλ -4��״̬
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	printf("%d\n", sizeof(struct S));//8
//	return 0;
//}



//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	return 0;
//}



////ö������
//enum Sex
//{
//	//ö�ٳ���
//	MALE=2,
//	FEMALE=4,
//	SECRET
//};
//
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//
//
////#define  RED 0
////#define  GREEN 1
////#define  BLUE 2
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = BLUE;
//	//enum Color c = 2;// ���ܸ�ֵ �ᱨ�� ��Ϊ2-int c-enum Color
//	printf("%d %d %d\n", RED, GREEN, BLUE);//0 1 2
//	printf("%d %d %d\n", GREEN, BLUE,RED);//1 2 0
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);//2 4 5
//	return 0;
//}



////����
//union Un
//{
//	char c;//1
//	int i;//4
//};
//
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//4
//	//%p�Ե�ַ��ʽ��ӡ
//	printf("%p\n", &(u.c));//0093FD1C
//	printf("%p\n", &(u.i));//0093FD1C
//	printf("%p\n", &u);//0093FD1C
//	return 0;
//}





//int main()
//{
//	int a = 1;
//	if (1 == *(char*)&a)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	//���ݸ�λ----���ݵ�λ
//	//int a = 0x11223344;
//	//�͵�ַ--------�ߵ�ַ
//	//[][][][11][22][33][44][][][][][] ����ֽ���洢ģʽ
//	//[][][][44][33][22][11][][][][][] С���ֽ���洢ģʽ
//
//	return 0;
//
//}

//check_sys()
//{
//	int a = 1;
//	//����1 ��ʾС��
//	//����0 ��ʾ���
//	return *(char*)&a
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}



//check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//����1 ��ʾС��
//	//����0 ��ʾ���
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}


union Un
{         //��С Ĭ�� ��Сֵ
	int a;//4 8 4
	char arr[5];//5 1 8 1
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));//8
}