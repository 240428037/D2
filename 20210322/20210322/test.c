#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


////��9�ĸ���
////��д������һ�� 1��100�����������г��ֶ��ٸ�����9
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


////�������
////����1/1-1/2+1/3-1/4+1/5+...+1/99-1/100��ֵ ��ӡ�����
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

////�����ֵ
////��ʮ���������ֵ
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];//max��ֵ���ܸ�0 ��������е�Ԫ��ȫ�Ǹ���
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


////�˷��ھ���
////����Ļ�����9*9�˷��ھ���
////1*1=1
////2*1=2 2*2=4
////3*1=3 3*2=6 3*3=9
//int main()
//{
//	int i = 0;
//	//ȷ����ӡ9��
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		int j = 1;
//		for (j = 1; j <= i;j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//%2d ��ӡ��λ ���û������ �ÿո��� 
//			%-2d����� %2d�Ҷ���
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	//��������
//	int arr[10] = {1,2,3};//����ȫ��ʼ�� ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0 //1 2 3 0 0
//	char arr1[5] = { 'a', 'b' };//a b 0 0 0 
//	char arr2[5] = { 'a', 90 };//a b 0 0 0 b��ASCII��ֵΪ90
//	//�ַ�����
//	char arr3[5] = "ab";// a b \0 0 0
//	char arr4[] = "abcdef";//7��Ԫ�� ����һ��\0
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
//	printf("%d\n", strlen(arr2));//15 ���ֵ
//	return 0;
//}


//int main()
//{
//	//char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	//printf("%c\n", arr[3]);
//	//int i = 0;
//	//for (i = 0; i < (int)strlen(arr);i++)//strlen���ص���һ���޷����� ǿ������ת��(int)
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
//	//���ڶ�ά����
//	//�п���ʡ�� �в���ʡ��
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
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1;i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i;j++)
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
//
//}
//
//
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr�������� �ų�����:��С����
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
//	printf("%p\n", &arr);//0073FD64 //&arr-����ĵ�ַ
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
//	//if else ��д�Ӵ����
//	if (condition)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//	//if()�е��жϱ��ʽ
//	//����д����� ����д���ұ�
//	//��ֹ��== д�� =
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
//		printf("�������\n");
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
//	printf("����������:>");//123 abc
//	scanf("%s", password);
//	//��������ʣһ��'\n'
//	//��ȡ����'\n'
//	//getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(y/n):>");
//	ret = getchar();
//	if ('y' == ret)
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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
//		//ֻ��ӡ�ַ�0-9
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
//		printf("%d ", i);//��ѭ��//1 2 3 4
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
//		for (; j < 10; j++)//�ڶ��ν����ʱ��j=10
//		{
//			printf("hehe\n");//10��hehe
//		}
//	}
//	//for (;;)
//	//{
//	//	printf("hehe\n");//��ѭ��
//	//}
//	return 0;
//}


//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");//2��hehe
//	}
//}


//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//k=0�Ǹ�ֵ��� 0Ϊ�� �������ѭ��
//		k++;
//	//0��
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
		printf("%d ", i);//1 2 3 4��ѭ��
		i++;
	} while (i<=10);
	return 0;
}