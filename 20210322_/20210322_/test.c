#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



////计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n;i++)
//	{
//		ret = ret*i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}

////计算1!+2!+..+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1+2+6=9
//	for (n = 1; n <= 3;n++)
//	{
//		//如果不加ret=1 第三次进入循环ret=2
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		//n的阶乘
//		sum = sum + ret;
//	}
//	//如果不加ret=1
//	//ret=1*1=1
//	//ret=1*1*2=2
//	//ret=2*1*2*3=12
//	printf("sum=%d\n", sum);
//	return 0;
//}



////计算1!+2!+..+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1+2+6=9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret*n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

////在一个有序数组中查找具体的某个数字n
////编写int binsearcha(int x,int v[],int n);
////功能 在v[0]<=v[1]<=v[2]<=...<=v[n-1]的数组中查找x
////遍历
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//写一个代码 在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz;i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i ==sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


////折半查找算法
////二分查找算法
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

////编写代码 演示多个字符从两端移动 向中间汇聚
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);//#include <windows.h>
//		system("cls");//执行系统命令的一个函数 #include <stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}



////编写代码实现 模拟用户登录情景 并且只能登录三次
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s",password);
//		if (strcmp(password,"123456")==0)//不能用==来比较两个字符串是否相等 使用库函数strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//	return 0;
//}



////猜数字游戏
////1.电脑会生成一个随机数
////2.猜数字
//#include <stdlib.h>
//#include <time.h>
//
//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;//接收猜的数字
//	//时间戳 当前计算机的时间-计算机的起始时间（1970.1.1.0.0.0）=（xxx）秒
//	//拿时间戳来设置随机数的生成起始点
//	//time_t time(time_t *timer)
//	ret = rand()%100+1;
//	//生成1-100之间随机数
//	//+1是因为%后得到的数字是0-99 +1就是1-100
//
//	//生成随机数 
//	//RAND_MAX-32767
//
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("#####################\n");
//	printf("##1. play  0. exit ##\n");
//	printf("#####################\n");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	for (...)
//	{
//		for (...)
//		{
//			for (...)
//			{
//				if (disaster)
//					go to ERROR;
//			}
//		}
//	}
//ERROR:
//	if (disaster)
//		//处理错误情况
//	return 0;
//}


////shutdown -s -t 60//60s关机
////shutdown -a//取消关机
////system()//执行系统命令
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在1分钟内关机,如果输入:我是猪,就取消关机\n请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");
//		break;
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


////shutdown -s -t 60//60s关机
////shutdown -a//取消关机
////system()//执行系统命令
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("电脑将在1分钟内关机,如果输入:我是猪,就取消关机\n请输入:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "我是猪"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}