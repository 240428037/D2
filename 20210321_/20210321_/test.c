#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



////���Լ��
////���������� ���������������Լ��
////շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

////��ӡ����
////��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000;year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2.�ܱ�400����������
//		
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d " , year);
//			count++;
//		}
//		else if (year%400==0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	} 
//	printf("\ncount=%d\n", count);
//	return 0;
//}



//��ӡ����
//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2.�ܱ�400����������
//
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


////��ӡ����
////дһ������ ��ӡ100-200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//1.break;
//		//2.ѭ������
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}

//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//1.break;
//		//2.ѭ������
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		//�ߵ��˴�
//		//1.break;
//		//2.ѭ������ д�ڶ��������if
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}




int main()
{



	return 0;
}




