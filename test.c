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
//}请计算表达式“(-8+22)×a-10+c÷2”，其中，a = 40，c = 212。
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
//}计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//1/1 + 1/3 + 1/5 +……1/99
//1/2 + 1/4 + 1/6 +……1/100
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
//	printf("结果是%d", n - m);
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
////}a. 通过%的方式取当前数据的个位，检测个位数据是否为9
//如果是，给计数器加1
//b.通过 / 的方式取当前数据的十位，检测十位数据是否是9，
//如果是，给计数器加1
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
//}编写代码在一个整形有序数组中查找具体的某个数

//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//有序数组;
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
//		sum = sum * flag + 1.0 / i;//用浮点数来精算；
//		flag = -flag;//奇数为-1 偶数为1；
//	}
//	printf("%lf", sum);
//	return 0;
//}
//二分查找；,1
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 7;
	while (left <= right)//判断left和right之间还有没有元素在，
		//直到区间内元素没有了，说明key不在区间内；否则继续，直到区间中没有元素时，说明key不在集合中，打印找不到
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
		printf("找不到了");
	}
	return 0;
}