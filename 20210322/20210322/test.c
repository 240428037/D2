#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////数9的个数
////编写程序数一下 1到100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100;i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//		//9 19 29 ...99
//		//90 91 92...99
//		//99
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


////分数求和
////计算1/1-1/2+1/3-1/4+1/5+...+1/99-1/100的值 打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100;i++)
//	{
//		sum += flag*1.0/ i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

////求最大值
////求十个数的最大值
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];//max初值不能赋0 如果数组中的元素全是负数
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


////乘法口诀表
////在屏幕上输出9*9乘法口诀表
////1*1=1
////2*1=2 2*2=4
////3*1=3 3*2=6 3*3=9
//int main()
//{
//	int i = 0;
//	//确定打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 1;
//		for (j = 1; j <= i;j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//%2d 打印两位 如果没有数字 用空格补齐 
//			%-2d左对齐 %2d右对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	//整形数组
//	int arr[10] = {1,2,3};//不完全初始化 剩下的元素默认初始化为0 //1 2 3 0 0
//	char arr1[5] = { 'a', 'b' };//a b 0 0 0 
//	char arr2[5] = { 'a', 90 };//a b 0 0 0 b的ASCII码值为90
//	//字符数组
//	char arr3[5] = "ab";// a b \0 0 0
//	char arr4[] = "abcdef";//7个元素 还有一个\0
//	printf("%d\n", sizeof(arr4));//7
//	printf("%d\n", strlen(arr4));//6
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//15 随机值
//	return 0;
//}


//int main()
//{
//	//char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	//printf("%c\n", arr[3]);
//	//int i = 0;
//	//for (i = 0; i < (int)strlen(arr);i++)//strlen返回的是一个无符号数 强制类型转换(int)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	//&arr[0]=00D6F7C4
//	//&arr[1] = 00D6F7C8
//	//& arr[2] = 00D6F7CC
//	//& arr[3] = 00D6F7D0
//	//& arr[4] = 00D6F7D4
//	//& arr[5] = 00D6F7D8
//	//& arr[6] = 00D6F7DC
//	//& arr[7] = 00D6F7E0
//	//&arr[8] = 00D6F7E4
//	//&arr[9] = 00D6F7E8
//	return 0;
//}


//int main()
//{
//	int arr1[3][4] = {1,2,3,4,5};
//	//1 2 3 4
//	//5 0 0 0 
//	//0 0 0 0 
//	int arr2[3][4] = { { 1, 2, 3 }, {4,5} };
//	//1 2 3 0
//	//4 5 0 0 
//	//0 0 0 0 
//	int arr3[][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };
//	//对于二维数组
//	//行可以省略 列不能省略
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, {4,5} };
//	int i = 0;
//	for (i = 0; i < 3;i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d]=%p\n",i,j &arr[i][j]);
//		}
//	}
//	return 0;
//}

//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1;i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i;j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//}
//
//
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序 排成升序:从小到大
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	printf("%p\n", arr);//0073FD64
//	printf("%p\n", &arr[0]);//0073FD64
//	printf("%p\n", &arr);//0073FD64 //&arr-数组的地址
//	printf("%p\n", &arr[1]); //0073FD68
//	printf("%p\n", &arr+1);//0073FD8C
//	printf("%d\n", *arr);//1
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//
//	}
//	else
//		printf("haha\n");
//	return 0;
//}

//int main()
//{
//	//if else 书写加代码块
//	if (condition)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//	//if()中的判断表达式
//	//常量写在左边 变量写在右边
//	//防止把== 写成 =
//	int num = 1;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100;i+=2)
//	{
//		printf("%d ", i);
//		count++;
//	}
//	printf("\ncount=%d", count);
//}

//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	//while (i<=100)
//	//{
//	//	if (i % 2 == 1)
//	//		printf("%d ",i);
//	//	i++;
//	//}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//}


//#include <stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n) //m=2 n=1
//	{
//	case 1:
//		m++; //m=3 n=1
//	case 2:
//		n++; //m=3 n=2
//	case 3:
//		switch (n) //m=3 n=2
//		{
//		case 1:
//			n++; 
//		case 2:
//			m++;
//			n++; //m=4 n=3
//			break;
//		}
//	case 4:
//		m++; //m=5 n=3
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);//m=5 n=3
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);//2 3 4 6 7 8 9 10
//	}
//	return 0;
//}


//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("\n%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//EOF-ctrl+z
//	//EOF-end of file->-1
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}


//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");//123 abc
//	scanf("%s", password);
//	//缓冲区还剩一个'\n'
//	//读取以下'\n'
//	//getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(y/n):>");
//	ret = getchar();
//	if ('y' == ret)
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0'||ch>'9')
//			continue;
//		//只打印字符0-9
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10;i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i==5)
//			continue;
//		printf("%d ", i);//1 2 3 4  6 7 8 9 10
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i==5)
//			continue;
//		printf("%d ", i);//死循环//1 2 3 4
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//第二次进入的时候j=10
//		{
//			printf("hehe\n");//10个hehe
//		}
//	}
//	//for (;;)
//	//{
//	//	printf("hehe\n");//死循环
//	//}
//	return 0;
//}


//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");//2个hehe
//	}
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//k=0是赋值语句 0为假 不仅如此循环
//		k++;
//	//0次
//
//	return 0;
//}

int main()
{
	int i = 1;
	do 
	{
		if (i==5)
			continue;
		printf("%d ", i);//1 2 3 4死循环
		i++;
	} while (i<=10);
	return 0;
}