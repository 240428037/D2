#define _CRT_SECURE_NO_WARNINGS 1
#include <assert.h>
#include<stdio.h>
////int main()
////{
////	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//arr-整形有序数组
////	int k = 6;//找6
////	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
////	int left = 0;//左下标
////	int right = sz - 1;//右下标
////	while (left <= right)
////	{
////		int mid = (left + right) / 2;
////		if (arr[mid] > k)
////		{
////			right = mid - 1;
////		}
////		else if (arr[mid] < k)
////		{
////			left = mid + 1;
////		}
////		else
////		{
////			printf("找到了,下标是：%d\n", mid);
////			break;
////		}
////	}
////	if (left>right)
////	{
////		printf("找不到\n");
////	}
////	return 0;
////}
////
////
////
////int binary_search(int arr[], int k, int sz)
////{
////	//算法实现
////	int left = 0;
////	int right = sz - 1;
////	while (left <= right)// =不能丢
////	{
////		int mid = (left + right) / 2;//这句代码必须放在while循环之中，因为mid要变化
////		if (arr[mid] < k)
////		{
////			left = mid + 1;
////		}
////		else if (arr[mid]>k)
////		{
////			right = mid - 1;
////		}
////		else
////		{
////			return mid;
////		}
////	}
////	return -1;//return -1放在while循环的外面
////}
////int main()
////{
////	//二分查找
////	//在一个有序数组中查找具体的某个数
////	//如果找到了返回这个数的下标 找不到返回-1
////	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
////	int k = 6;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	int ret = binary_search(arr, k, sz);
////	if (ret == -1)
////	{
////		printf("找不到指定的数字\n");
////	}
////	else
////	{
////		printf("找到了，下标是：%d\n", ret);
////	}
////	return 0;
////}
//
//
//int BinarySearch(int*a, int n, int k)
//{
//	assert(a);
//	int left = 0, right = n - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) >> 1;
//		if (a[mid] > k)
//			right = mid - 1;
//		else if (a[mid] < k)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回这个数的下标 找不到返回-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = BinarySearch(arr,sz,k);
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


//int BinarySearch(int*a, int n, int k)
//{
//	assert(a);
//	int left = 0, right = n - 1;//right=n;
//	while (left <= right)//left<right -循环控制条件有两种写法，，取决于right;
//	{
//		int mid = (left + right) >> 1;
//		if (a[mid] > k)
//			right = mid - 1;
//		else if (a[mid] < k)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}



//void BubbleSort(int*a, int n)
//{
//	for (int i = 0; i < n - 1 - i; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (a[j]>a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//void BubbleSort1(int*a, int n)
//{
//	for (int end = n - 1; end > 0; end--)
//	{
//		int flag = 0;
//		for (int i = 0; i<end; i++)
//		{
//			if (a[i]>a[i + 1])
//			{
//				int tmp = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}



////封装成一个函数bubble_sort()
//
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序:从小到大
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////对于以上算法，如果要进行排序的数据其实本身已经有序，就没有必要再进行排序。
////优化如下：引入一个flag
//
//void bubble_sort(int arr[], int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
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
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序 排成升序:从小到大
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//void Swap(int*p1, int*p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void BubbleSort1(int*a, int n)
//{
//	assert(a);
//	for (int i = 0; i < n - 1;i++)
//	{
//		int flag = 0;
//		for (int j = 0; i < n - 1 - i;j++)
//		{
//			if (a[j]>a[j+1])
//			{
//				Swap(&a[j], &a[j + 1]);
//			}
//			flag = 1;
//		}
//		if (flag == 0)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序 排成升序:从小到大
//	BubbleSort1(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


void Swap(int*p1, int*p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void BubbleSort1(int*a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int flag = 0;
		for (int j = 0; i < n - 1 - i; j++)
		{
			if (a[j]>a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}
void BubbleSort(int*a, int n)
{
	for (int end = n - 1; end > 0;end--)
	{
		int flag = 0;
		for (int i = 0; i < end;i++)
		{
			if (a[i]>a[i + 1])
			{
				Swap(&a[i], &a[i + 1]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
}

int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序 排成升序:从小到大
	BubbleSort1(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}