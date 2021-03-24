#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;//在内存中开辟一块空间
//	int* p = &a;//对于变量a 用&操作符取出它的地址
//	//将a的地址存放在p变量中 p就是一个指针变量
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = (char*)&a;
//	printf("%p\n", &a);//  005DFBAC
//	printf("%p\n", pa);//  005DFBAC
//	printf("%p\n", pa+1);//005DFBB0
//	printf("%p\n", pc);//  005DFBAC
//	printf("%p\n", pc+1);//005DFBAD
//	return 0;
//
//}


//int main()
//{
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pa = &n;
//	*pa = 0;// 00 00 00 00
//	*pa = 0;// 00 33 22 11
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名-首元素地址
//	int i = 0;
//	for (i = 0; i < 10;i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int a;//局部变量不初始化 默认是随机值
//	int* p;//局部的指针变量未初始化 默认为随机值
//	*p = 20;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11;i++)
//	{
//		//当指针指向的范围超出数组arr的范围时 p就是野指针
//		*(p++) = 1;
//	}
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p=test();
//	*p = 20;//p指向的空间已经被释放
//	return 0;
//}


//int main()
//{
//	//未初始化的指针变量
//	int *p;//局部变量不初始化 里面默认放的是一个随机值
//	*p = 20;
//	return 0;
//}

////数组越界导致的野指针问题
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i=0; i <= 12;i++)
//	{
//		//*p = i;
//		//p++;
//		*p++ = i;//后置++ 先解引用再++
//	}
//	return 0;
//}

//int* TEST()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p=TEST();
//	printf("%d\n", *p);
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int*pa = &a;//初始化
//	int* p = NULL;//NULL-用来初始化指针的 给指针赋值
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//不再使用 把它置为NULL
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//不再使用 把它置为NULL
//	if (pa != NULL)//使用之前检查有效性
//	{
//
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = arr;
//
//	//for (i = 0; i < sz;i++)
//	//{
//	//	printf("%d ", *p);
//	//	//p = p + 1;
//	//	p++;
//	//}
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p += 2;
//	//}
//
//	int* p = &arr[9];
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p -= 2;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);//指针减指针 得到的是指针之间的元素个数
//	//要得到元素个数 得大地址-小地址
//	//两个指针必须指向同一块空间
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end!='\0')
//	{
//		end++;
//	}
//	return end - start;
//
//}
//int main()
//{
//	//strlen -求字符串长度
//	//递归 -模拟实现了strlen -计数器的方式1 递归的方式2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float *vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}////	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}//避免这样写//	//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置比较
//	//但是不允许与指向第一个元素之前的那个内存位置的指针进行比较//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	//地址-首元素地址
//	printf("%p\n", arr);//00AFF9D0
//	printf("%p\n", arr+1);//00AFF9D4//+4
//	printf("%p\n", &arr[0]);//00AFF9D0
//	printf("%p\n", &arr[0]+1);//00AFF9D4//+4
//	printf("%p\n", &arr);//00AFF9D0
//	printf("%p\n", &arr+1);//00AFF9F8//+40
//	////F8-DO
//	//F8
//	//DO
//	//28-十六进制 ->十进制 2*16+8=40
//	//两个例外
//	//1.&arr -&数组名 数组名不是首元素地址 数组名表示整个数组
//	//&数组名 取出的是整个数组的地址
//	//2.sizeof(arr)  sizeof(数组名) 数组名表示整个数组
//	//sizeof(数组名）计算的是整个数组的大小
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));//0 1 2 3 4 5 6 7 8 9
//		//printf("%d ", arr[i]);//0 1 2 3 4 5 6 7 8 9
//	}
//	//for (i = 0; i < 10;i++)
//	//{
//	//	printf("%p=====%p\n", p + i, &arr[i]);//打印结果相同
//	//}
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//ppa就是二级指针
//	int* ** pppa = &ppa;
//	**ppa = 20;
//	printf("%d\n", **ppa);//20
//	printf("%d\n", *pa);//20
//	printf("%d\n", a);//20
//	//int 
//	//int*
//	//int* * 
//	//第一个*表示ppa的类型是int*
//	//第二个*表示ppa指向的对象是int*
//	return 0;
//}


int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//整形数组 -存放整形
	//字符数组 -存放字符
	//指针数组 -存放指针
	int arr[10];
	int* arr2[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3;i++)
	{
		printf("%d ", *(arr2[i]));//10 20 30
	}
	return 0;
}