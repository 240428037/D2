#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

//malloc��free
//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int*p = (int*)malloc(10*sizeof(int)); 
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	} 
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	} 
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ���Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//
//
//
//	system("pause");
//	return 0;
//}




//calloc
//int main()
//{
//	int* p = calloc(10, sizeof(int));
//
//	//if (NULL != p)
//	//{
//	//}
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	int* p2 = realloc(p, 40);
//	int i = 0;
//	for (i = 5; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p2 + i));
//	}
//
//
//	int* ptr = realloc(p, int_max);
//	if (ptr != null)
//	{ 
//		p = ptr;
//	}
//	free(ptr);
//	ptr = NULL;
//
//
//	return 0;
//}



//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	system("pause");
//	return 0;
//}


char* GetMemory(char *p)
{
	p = (char *)malloc(100);
	return p;
}
void Test(void)
{
	char *str = NULL;
	str = GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
}

int main()
{
	Test();
	system("pause");
	return 0;
}