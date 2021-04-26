////#define _CRT_SECURE_NO_WARNINGS 1
////#include <stdio.h>
////void Swap(int*p1, int*p2)
////{
////	int tmp = *p1;
////	*p1 = *p2;
////	*p2 = tmp;
////}
////void BubbleSort1(int*a, int n)
////{
////	for (int i = 0; i < n - 1; i++)
////	{
////		int flag = 0;
////		for (int j = 0; i < n - 1 - i; j++)
////		{
////			if (a[j]>a[j + 1])
////			{
////				Swap(&a[j], &a[j + 1]);
////				flag = 1;
////			}
////		}
////		if (flag == 0)
////			break;
////	}
////}
////
////
////void Swap(int*p1, int*p2)
////{
////	int tmp = *p1;
////	*p1 = *p2;
////	*p2 = tmp;
////}
////void BubbleSort(int*a, int n)
////{
////	for (int end = n - 1; end > 0; end--)
////	{
////		int flag = 0;
////		for (int i = 0; i < end; i++)
////		{
////			if (a[i]>a[i + 1])
////			{
////				Swap(&a[i], &a[i + 1]);
////				flag = 1;
////			}
////		}
////		if (flag == 0)
////			break;
////	}
////}
////
////int main()
////{
////	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
////	int i = 0;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	//对arr进行排序 排成升序:从小到大
////	BubbleSort1(arr, sz);
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////	return 0;
////}
//
//
//void Swap(int*p1, int*p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void BubbleSort1(int*a, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int flag = 0;//引入flag提高排序效率，如果已经有序，就不用排了
//		for (int j = 0; i < n - 1 - i; j++)
//		{
//			if (a[j]>a[j + 1])
//			{
//				Swap(&a[j], &a[j + 1]);
//				flag = 1;//flag=1说明不有序
//			}
//		}
//		if (flag == 0)//说明已经有序，直接break;
//			break;
//	}
//}
//
//
//
//void Swap(int*p1, int*p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void BubbleSort(int*a, int n)
//{
//	for (int end = n - 1; end > 0; end--)
//	{
//		int flag = 0;
//		for (int i = 0; i < end; i++)
//		{
//			if (a[i]>a[i + 1])
//			{
//				Swap(&a[i], &a[i + 1]);
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}



int BinarySearch(int*a, int n, int k)
{
	assert(a);
	int left = 0, right = n - 1;//right=n;
	while (left <= right)//left<right -循环控制条件有两种写法，，取决于right;
	{
		int mid = (left + right) >> 1;
		if (a[mid] > k)
			right = mid - 1;
		else if (a[mid] < k)
			left = mid + 1;
		else
			return mid;
	}
	return -1;
}



void BubbleSort(int*a, int n)
{
	for (int end = n - 1; end > 0; end--)
	{
		int flag = 0;
		for (int i = 0; i < end; i++)
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