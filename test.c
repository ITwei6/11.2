#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i;
//	for (i = 0;i < 2;i++)
//	{
//		printf("     **     \n");
//	}
//	for (i = 0;i < 2;i++)
//	{
//		printf("************\n");
//	}
//	for (i = 0;i < 2;i++)
//	{
//		printf("    *  *    \n");
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != -1)
//	{
//		if (n > 140)
//		{
//			printf("Genius");
//		}
//	}
//	return 0;
//}�������ʽ��(-8+22)��a-10+c��2�������У�a = 40��c = 212��
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int y;
//	y = (-8 + 22) * a - 10 + c / 2;
//	printf("%d", y);
//	return 0;
//}
//int main()
//{
//	printf("l lost my cellphone!\n");
//	return 0;
//}
//int main()
//{
//	
//	int i, j;
//	for (i = 1;i <= 9;i++)
//	{
//		for (j = 1;j <= 9;j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	int max = 0;
//	for (i = 0;i < 9;i++)
//	{
//		if (arr[i] > arr[i + 1])
//			max = arr[i];
//		else
//			max = arr[i + 1];
//	}
//	printf("max=%d", max);
//	return 0;
//}����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//1/1 + 1/3 + 1/5 +����1/99
//1/2 + 1/4 + 1/6 +����1/100
//int main()
//{
//	int i;
//	int n = 0;
//	int m = 0;
//	for (i = 0;i < 50;i++)
//	{
//		n = n + 1 / (2*i+1);
//	}
//	for (i = 0;i < 50;i++)
//	{
//		
//	}
//
//	printf("�����%d", n - m);
//	return 0;
//}
//int main()
//{
//
//	int i;
//	int n = 0;
//	int m = 0;
//	for (i = 0;i < 50;i++)
//	{
//		n = n + 1 / (2 * i + 1);
//	}
//	for (i = 1;i <= 50;i++)
//	{
//		m = m + 1 / (2 * i);
//	}
//	printf("%d", n - m);
//	return 0;
//
////}a. ͨ��%�ķ�ʽȡ��ǰ���ݵĸ�λ������λ�����Ƿ�Ϊ9
//����ǣ�����������1
//b.ͨ�� / �ķ�ʽȡ��ǰ���ݵ�ʮλ�����ʮλ�����Ƿ���9��
//����ǣ�����������1
//int main()
//{
//	int i;
//	int count = 0;
//	for (i = 0;i < 100;i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		else if (i == 99)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}��д������һ���������������в��Ҿ����ĳ����

//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//��������;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int f = 1;
//	int left = 0;
//	int right = len - 1;
//	int m=(left + right) / 2;
//	while ()
//	{
//		m=(left + right) / 2;
//		if (arr[m] < f)
//		{
//			left = m + 1;
//		}
//		else
//			right = m - 1;
//   }
//	
//		printf("%d", m);
//	
//	return 0;
//}
//int main()
//{
//	int i;
//	int flag = 1;
//	double sum = 0.0;
//	for (i = 1;i <= 100;i++)
//	{
//		sum = sum * flag + 1.0 / i;//�ø����������㣻
//		flag = -flag;//����Ϊ-1 ż��Ϊ1��
//	}
//	printf("%lf", sum);
//	return 0;
//}
//���ֲ��ң�,1
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 7;
	while (left <= right)//�ж�left��right֮�仹��û��Ԫ���ڣ�
		//ֱ��������Ԫ��û���ˣ�˵��key���������ڣ����������ֱ��������û��Ԫ��ʱ��˵��key���ڼ����У���ӡ�Ҳ���
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < key)
			left = mid + 1;
		else if (arr[mid] > key)
			right = mid - 1;
		else
		{
			printf("%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����");
	}
	return 0;
}