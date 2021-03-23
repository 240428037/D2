#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//strcpy
//string copy
//strlen
//string length
//char* strcpy(char* destination,const char* source)
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#######";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);//bit
//	return 0;
//}


//memset
//memory set
//void* memeset(void* ptr,int value,siez_t num);
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);//***** world
//	return 0;
//}


////写一个函数找出两个整数中的最大值
//int get_max(int x, int y)
//{
//	return (x > y) ? (x) : (y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	max = get_max(100, 200);
//	printf("max=%d\n", max);
//}

////写一个整数可以交换两个整形变量的内容
////int main()
////{
////	int a = 10;
////	int b = 20;
////	int tmp = 0;
////	tmp = a;
////	a = b;
////	b = tmp;
////	printf("a=%d b=%d\n", a, b);
////	return 0;
////}
//
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* x,int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



////写一个函数判断一个数是不是素数
////打印100-2000之间的素数
////int is_prime(int n)
////{
////	int j = 0;
////	for (j = 2; j < n; j++)
////	{
////		if (n%j == 0)
////			return 0;
////	}
////	//只有一种情况 当j=n的时候才会来到这里
////	//所以不用加if(j==n)的判断条件
////	return 1;
////}
////int main()
////{
////	int i = 0;
////	for (i = 100; i <= 200;i++)
////	{
////		//判断i是否为素数
////		if (1 == is_prime(i))
////			printf("%d ", i);
////	}
////	return 0;
////}
//
//
//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}
//	//只有一种情况 当j=n的时候才会来到这里
//	//所以不用加if(j==n)的判断条件
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (1 == is_prime(i))
//			printf("%d ", i);
//	}
//	return 0;
//}


////写一个函数判断一年是不是闰年
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000;year++)
//	{
//		if (1 == (is_leap_year(year)))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//写一个函数 实现一个整形有序数组的二分查找
//int binary_search(int arr[], int k,int sz)
//{
//	//算法实现
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)//=不能丢
//	{
//		int mid = (left + right) / 2;//这句代码必须放在while循环之中 因为mid要变化
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//return -1放在while循环的外面
//}
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回这个数的下标 找不到返回-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

////写一个函数 每调用一次这个函数 就会将num的值增加1
//void Add(int* p)
//{
//	(*p)++;//给*p要加() 因为++的优先级比*p高
//}
//int main()
//{
//	int num = 0;
//	//调用函数 使得num每次增加1
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

//void new_line()
//{
//	printf("hehe\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3;i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//	return 0;
//}

//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);//3
//	printf("%d\n", strlen("abc"));//3
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	//printf的返回值为打印字符的个数
//
//	printf("%d", 43);//43-2个字符
//	printf("%d", printf("%d", 43));//432
//	printf("%d", 2);//2-1个字符
//	
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	printf("%d", 1);//1
//	return 0;
//}



//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


////一个递归的例子
//int main()
//{
//	printf("hehe\n");//程序会挂 栈溢出
//	main();
//	return 0;
//}


////接收一个整形值（无符号） 按照顺序打印它的每一位
////eg 输入1234 输出1 2 3 4 
////1234/10=123...4
////123/10=12...3
////12/10=1...2
////1/10=0...1
//
////void print(int n)
////{
////	if (n>9)
////	{
////		print(n / 10);
////	}
////	printf("%d ", n % 10);
////}
////int main()
////{
////	unsigned int num = 1234;
////	print(num);
////	return 0;
////}
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


////编写函数不允许创建临时变量 求字符串长度
////求字符串长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	//arr是数组 数组传参 传过去的不是整个数组 而是首元素的地址
//	printf("len=%d\n", len);
//	return 0;
//}
//
////不创建临时变量 求字符串长度
////递归的方法
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
////3
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}


////求n的阶乘（不考虑溢出）
////循环
////int Fac1(int n)
////{
////	int i = 0;
////	int ret = 1;
////	for (i = 1; i <= n;i++)
////	{
////		ret *= i;
////	}
////	return ret;
////}
//
////int main()
////{
////	//求n的阶乘
////	int n = 0;
////	int ret = 0;
////	scanf("%d", &n);
////	ret = Fac1(n);
////	printf("%d\n", ret);
////	return 0;
////}
//
////递归
//int Fac2(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//		return n*Fac2(n - 1);
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}





////求第n个斐波那契数
////斐波那契数列
////1 1 2 3 5 8 13 21 34 55...
////Fib(n)
////n<=2 1
////n>2 Fib(n-1)+Fib(n-2)
//
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//测试第3个斐波那契数的计算次数
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 2) + Fib(n - 1);
//}
////在使用Fib这个函数计算第50个斐波那契数字的时候特别耗时间
////50
////49 48
////48 47 47 46
////重复计算
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	printf("count=%d\n", count);//count 第3个斐波那契数被重复计算了多少次
//	return 0;
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}