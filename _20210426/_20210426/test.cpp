#define _CRT_SECURE_NO_WARNINGS 1
#include <assert.h>
#include<stdio.h>
////int main()
////{
////	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//arr-������������
////	int k = 6;//��6
////	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
////	int left = 0;//���±�
////	int right = sz - 1;//���±�
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
////			printf("�ҵ���,�±��ǣ�%d\n", mid);
////			break;
////		}
////	}
////	if (left>right)
////	{
////		printf("�Ҳ���\n");
////	}
////	return 0;
////}
////
////
////
////int binary_search(int arr[], int k, int sz)
////{
////	//�㷨ʵ��
////	int left = 0;
////	int right = sz - 1;
////	while (left <= right)// =���ܶ�
////	{
////		int mid = (left + right) / 2;//������������whileѭ��֮�У���ΪmidҪ�仯
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
////	return -1;//return -1����whileѭ��������
////}
////int main()
////{
////	//���ֲ���
////	//��һ�����������в��Ҿ����ĳ����
////	//����ҵ��˷�����������±� �Ҳ�������-1
////	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
////	int k = 6;
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	int ret = binary_search(arr, k, sz);
////	if (ret == -1)
////	{
////		printf("�Ҳ���ָ��������\n");
////	}
////	else
////	{
////		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
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
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷�����������±� �Ҳ�������-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = BinarySearch(arr,sz,k);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}


//int BinarySearch(int*a, int n, int k)
//{
//	assert(a);
//	int left = 0, right = n - 1;//right=n;
//	while (left <= right)//left<right -ѭ����������������д������ȡ����right;
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



////��װ��һ������bubble_sort()
//
//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
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
//	//��arr���������ų�����:��С����
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////���������㷨�����Ҫ���������������ʵ�����Ѿ����򣬾�û�б�Ҫ�ٽ�������
////�Ż����£�����һ��flag
//
//void bubble_sort(int arr[], int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
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
//	//��arr�������� �ų�����:��С����
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
//	//��arr�������� �ų�����:��С����
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
	//��arr�������� �ų�����:��С����
	BubbleSort1(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}