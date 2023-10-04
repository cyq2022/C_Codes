#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b += 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)count++;
//		if (i % 10 == 9)count++;
//	}
//	printf("%d" , count);
//}

//int main()
//{
//	int n = 4;
//	int arr[n];
//	return 0;
//}

//int main()
//{
//	char str[10] = { 'a','b','c' };
//	printf("%s",str);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3 };
//	char ch[10] = { 'a','b','c' };
//	char ch1[10] = "abc"; 
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9 };
//
//
//
//	return 0;
//}




//
//void swaps(int* arr, int a, int b)
//{
//	int t = 0;
//	t = arr[a];
//	arr[a] = arr[b];
//	arr[b] = t;
//}
//void bubble_sort(int *arr,int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1]) {
//				swaps(arr ,j, j + 1);
//			}
//		}
//	}
//}
///*
//		2  3  5  
//
//
//*/
//
//
//void print(int *arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print(arr, sz);
//	return 0;
//}


int main()
{
	int arr[10] = { 0 };
	printf("%p\n", arr);
	printf("%d\n", *arr);    //0  
	printf("%p\n", &arr);       
	printf("%d\n", *&arr[0]); //0
	printf("%p\n", &arr[0]); 

	printf("%d\n", sizeof(arr));// 40


	return 0;
}
//  arr  == &arr[0]