#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ p����Ұָ��
//		*(p++) = 1;
//	}
//	return 0;
//}


////����Խ�絼�µ�Ұָ������
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <= 12; i++)
//	{
//		//*p = i;
//		//p++;
//		*p++ = i;//����++ �Ƚ�������++
//	}
//	return 0;
//}


//int main()
//{
//	//δ��ʼ����ָ�����
//	int *p;//�ֲ���������ʼ�� ����Ĭ�Ϸŵ���һ�����ֵ
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int*pa = &a;//��ʼ��
//	int* p = NULL;//NULL-������ʼ��ָ��� ��ָ�븳ֵ
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <10; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ p����Ұָ��
//		*(p++) = 1;
//		printf("%d ", *p);
//	}
//	return 0;
//}


//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i = 0; i <10; i++)
//	{
//		//*p = i;
//		//p++;
//		*p++ = i;//����++ �Ƚ�������++
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz;i++)
//	{
//	      printf("%d ", *p);
//	      //p = p + 1;
//	      p++;
//	}
//	//for (i = 0; i < 5; i++)
//	//{
//	//      printf("%d ", *p);
//	//      p += 2;
//	//}
//	//int* p = &arr[9];
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p -= 2;
//	//}
//	return 0;
//}

//int* TEST()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = TEST();
//	printf("%d\n", *p);
//	return 0;
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
//	//      printf("%p=====%p\n", p + i, &arr[i]);//��ӡ�����ͬ
//	//}
//	return 0;
//}



//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//		//my_strlen("bit");
//		//1+my_strlen("it");
//		//1+1+my_strlen("t");
//		//1+1+1+my_strlen("");
//		//1+1+1+0
//		//3
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


//int check_sys()
//{
//	
//	int a = 1;
//
//	//����3
//	return *(char*)&a;
//
//	////����1
//	//char*p = (char*)&a;
//	//if (*p == 1)
//	//	return 1;
//	//else
//	//	return 0;
//
//	////����2
//	//char*p = (char*)&a;
//	//return *p;
//
//}
////int main()
////{
////	int ret = check_sys();
////	if (ret == 1)
////	{
////		printf("С��\n");
////	}
////	else
////	{
////		printf("���\n");
////	}
////	return 0;
////}



//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
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



//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//ͳ��num�еĲ������м���1
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
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	while (num)//3  //2
	{
		count++;//1 //2
		num = num&(num - 1);// 2=3&2 0=2&1
		//3 011
		//2 010
		//2 010
		//1 001
		//0 000
	}
	printf("%d\n", count);
	return 0;
}