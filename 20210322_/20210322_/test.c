#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



////����n�Ľ׳�
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

////����1!+2!+..+10!
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1+2+6=9
//	for (n = 1; n <= 3;n++)
//	{
//		//�������ret=1 �����ν���ѭ��ret=2
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//	//�������ret=1
//	//ret=1*1=1
//	//ret=1*1*2=2
//	//ret=2*1*2*3=12
//	printf("sum=%d\n", sum);
//	return 0;
//}



////����1!+2!+..+10!
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

////��һ�����������в��Ҿ����ĳ������n
////��дint binsearcha(int x,int v[],int n);
////���� ��v[0]<=v[1]<=v[2]<=...<=v[n-1]�������в���x
////����
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//дһ������ ��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz;i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i ==sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


////�۰�����㷨
////���ֲ����㷨
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 6;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
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
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

////��д���� ��ʾ����ַ��������ƶ� ���м���
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
//		//��Ϣһ��
//		Sleep(1000);//#include <windows.h>
//		system("cls");//ִ��ϵͳ�����һ������ #include <stdlib.h>
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}



////��д����ʵ�� ģ���û���¼�龰 ����ֻ�ܵ�¼����
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s",password);
//		if (strcmp(password,"123456")==0)//������==���Ƚ������ַ����Ƿ���� ʹ�ÿ⺯��strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (3 == i)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}



////��������Ϸ
////1.���Ի�����һ�������
////2.������
//#include <stdlib.h>
//#include <time.h>
//
//void game()
//{
//	//1.����һ�������
//	int ret = 0;
//	int guess = 0;//���ղµ�����
//	//ʱ��� ��ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0.0.0��=��xxx����
//	//��ʱ����������������������ʼ��
//	//time_t time(time_t *timer)
//	ret = rand()%100+1;
//	//����1-100֮�������
//	//+1����Ϊ%��õ���������0-99 +1����1-100
//
//	//��������� 
//	//RAND_MAX-32767
//
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess<ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//		//����������
//	return 0;
//}


////shutdown -s -t 60//60s�ػ�
////shutdown -a//ȡ���ػ�
////system()//ִ��ϵͳ����
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("���Խ���1�����ڹػ�,�������:������,��ȡ���ػ�\n������:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
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


////shutdown -s -t 60//60s�ػ�
////shutdown -a//ȡ���ػ�
////system()//ִ��ϵͳ����
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("���Խ���1�����ڹػ�,�������:������,��ȡ���ػ�\n������:>");
//		scanf("%s", input);
//		if (0 == strcmp(input, "������"))
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}