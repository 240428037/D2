#include <stdio.h>
//int main()
//{
//	//int a = 5 / 2;//商2余1
//	/*int a = 5 % 2;*/
//	double a = 5 / 2.0;
//	//printf("a=%d\n", a);
//	printf("a=%lf\n", a);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	//011
//	int b = 5;
//	//101
//	int c = a^b;
//	//011
//	//101
//	//001 &
//	//111 |
//	//110 ^
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int tmp = 0;
//	printf("before: a=%d b=%d\n", a, b);
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	//printf("after: a=%d b=%d\n", a, b);
//
//	//a = a + b;//a=8 b=5
//	//b = a - b;//a=8 b=3
//	//a = a - b;//a=3 b=5
//	//printf("after: a=%d b=%d\n", a, b);
//
//	a = a^b;
//	//a 011 3
//	//b 101 5
//	//a 110 6
//	//b 101 5
//	b = a^b;
//	//a 110 6
//	//b 101 5
//	//b 011 3
//	//a	110 6
//	a = a^b;
//	//b 011 3
//	//a	110 6
//	//a 101 5
//	//b 011 3
//	printf("after: a=%d b=%d\n", a, b);
//}


//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num中的补码中有几个1
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//
//	int i = 0;
//	for (i = 0; i < 32;i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	/*int a = 1;
//	if (a)
//	{
//		printf("haha\n");
//	}
//	if (!a)
//	{
//		printf("hehe\n");
//	}*/
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(int[10]));
//	//short s = 0;
//	//int a = 10;
//	//printf("%d\n", sizeof(s = a + 5));
//	//printf("%d\n", s);
//	//int a = 0;
//	//printf("%d\n", ~a);
//	//int a = 11;
//	//a = a | (1 << 2);
//	//printf("%d\n", a);
//	//a = a&(~(1 << 2));
//	//printf("%d\n", a);
//	//int a = 10;
//	//printf("%d\n", ++a);
//	////11
//	//printf("%d\n", a++);
//	////10
//	int a = (int)3.14;
//	return 0;
//}


////void test1(int arr[])
////{
////	printf("%d\n", sizeof(arr));//(2)
////}
////void test2(char ch[])
////{
////	printf("%d\n", sizeof(ch));//(4)
////}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)
//	printf("%d\n", sizeof(ch));//(3)
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}

//创建一个结构体类型 struct stu
struct stu
{
	//成员变量
	char name[20];
	int age;
	char id[20];
};
int main()
{
	//使用struct stu这个类型创建了一个学生对象s1 并初始化
	struct stu s1 = { "张三", 20, "20010127" };
	//结构体变量.成员名
	printf("%s\n", s1.name);
	
	struct stu* ps = &s1;
	printf("%s\n", (*ps).name);
	//结构体指针->成员名
	printf("%s\n", ps->name);
	return 0;
}

