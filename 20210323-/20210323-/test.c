#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 10;//���ڴ��п���һ��ռ�
//	int* p = &a;//���ڱ���a ��&������ȡ�����ĵ�ַ
//	//��a�ĵ�ַ�����p������ p����һ��ָ�����
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
//	int* p = arr;//������-��Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 10;i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int a;//�ֲ���������ʼ�� Ĭ�������ֵ
//	int* p;//�ֲ���ָ�����δ��ʼ�� Ĭ��Ϊ���ֵ
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
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ p����Ұָ��
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
//	*p = 20;//pָ��Ŀռ��Ѿ����ͷ�
//	return 0;
//}


//int main()
//{
//	//δ��ʼ����ָ�����
//	int *p;//�ֲ���������ʼ�� ����Ĭ�Ϸŵ���һ�����ֵ
//	*p = 20;
//	return 0;
//}

////����Խ�絼�µ�Ұָ������
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = a;
//	for (i=0; i <= 12;i++)
//	{
//		//*p = i;
//		//p++;
//		*p++ = i;//����++ �Ƚ�������++
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
//	int*pa = &a;//��ʼ��
//	int* p = NULL;//NULL-������ʼ��ָ��� ��ָ�븳ֵ
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//����ʹ�� ������ΪNULL
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//����ʹ�� ������ΪNULL
//	if (pa != NULL)//ʹ��֮ǰ�����Ч��
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
//	printf("%d\n", &arr[9] - &arr[0]);//ָ���ָ�� �õ�����ָ��֮���Ԫ�ظ���
//	//Ҫ�õ�Ԫ�ظ��� �ô��ַ-С��ַ
//	//����ָ�����ָ��ͬһ��ռ�
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
//	//strlen -���ַ�������
//	//�ݹ� -ģ��ʵ����strlen -�������ķ�ʽ1 �ݹ�ķ�ʽ2
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
//	}//��������д//	//����ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�ñȽ�
//	//���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	//��ַ-��Ԫ�ص�ַ
//	printf("%p\n", arr);//00AFF9D0
//	printf("%p\n", arr+1);//00AFF9D4//+4
//	printf("%p\n", &arr[0]);//00AFF9D0
//	printf("%p\n", &arr[0]+1);//00AFF9D4//+4
//	printf("%p\n", &arr);//00AFF9D0
//	printf("%p\n", &arr+1);//00AFF9F8//+40
//	////F8-DO
//	//F8
//	//DO
//	//28-ʮ������ ->ʮ���� 2*16+8=40
//	//��������
//	//1.&arr -&������ ������������Ԫ�ص�ַ ��������ʾ��������
//	//&������ ȡ��������������ĵ�ַ
//	//2.sizeof(arr)  sizeof(������) ��������ʾ��������
//	//sizeof(�����������������������Ĵ�С
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
//	//	printf("%p=====%p\n", p + i, &arr[i]);//��ӡ�����ͬ
//	//}
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//ppa���Ƕ���ָ��
//	int* ** pppa = &ppa;
//	**ppa = 20;
//	printf("%d\n", **ppa);//20
//	printf("%d\n", *pa);//20
//	printf("%d\n", a);//20
//	//int 
//	//int*
//	//int* * 
//	//��һ��*��ʾppa��������int*
//	//�ڶ���*��ʾppaָ��Ķ�����int*
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
	//�������� -�������
	//�ַ����� -����ַ�
	//ָ������ -���ָ��
	int arr[10];
	int* arr2[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3;i++)
	{
		printf("%d ", *(arr2[i]));//10 20 30
	}
	return 0;
}