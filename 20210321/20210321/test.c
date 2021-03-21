//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////struct 结构体关键字
////Stu 结构体标签
////struct Stu 结构体类型
//struct Stu
//{
//	//成员变量
//	//暂时不占用内存空间 类似于int, int a=10;
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量
////一般不使用 代码中尽量少的使用全局变量
//
////typedef是给struct Stu重新起了个名字叫Stu
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//Stu是类型不同于上面的s1,s2,s3对象 因为有typedef
//
//int main()
//{
//	struct Stu s1 = {"张三",20,"15135751894","女"};//s是局部结构体变量
//	Stu s2 = { "李四", 21"19829265459","男" };
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
//	Stu s = { "李四", 20, "15135751894", "女" };
//	print1(s);
//	print2(&s);
//	return 0;
//}


////声明一个结构体类型
////声明一个学生类型 是想通过学生类型来创建学生变量(对象)
//
//struct Stu
//{
//	//成员变量
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//全局结构体变量
//
//struct Stu s3;//全局结构体变量
//
//int main()
//{
//	//创建局部结构体变量
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
//	struct Node n;//会递归 错误
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
//	//链表:数据域 指针域
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




////位段 位-二进制位
//struct S
//{
//	int a : 2;//2个bit位 -4个状态
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8个字节
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



////枚举类型
//enum Sex
//{
//	//枚举常量
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
//	//enum Color c = 2;// 不能赋值 会报错 因为2-int c-enum Color
//	printf("%d %d %d\n", RED, GREEN, BLUE);//0 1 2
//	printf("%d %d %d\n", GREEN, BLUE,RED);//1 2 0
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);//2 4 5
//	return 0;
//}



////联合
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
//	//%p以地址形式打印
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	//数据高位----数据低位
//	//int a = 0x11223344;
//	//低地址--------高地址
//	//[][][][11][22][33][44][][][][][] 大端字节序存储模式
//	//[][][][44][33][22][11][][][][][] 小端字节序存储模式
//
//	return 0;
//
//}

//check_sys()
//{
//	int a = 1;
//	//返回1 表示小端
//	//返回0 表示大端
//	return *(char*)&a
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
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
//	//返回1 表示小端
//	//返回0 表示大端
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


union Un
{         //大小 默认 较小值
	int a;//4 8 4
	char arr[5];//5 1 8 1
};
int main()
{
	union Un u;
	printf("%d\n", sizeof(u));//8
}