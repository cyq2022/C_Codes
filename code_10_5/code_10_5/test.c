#define  _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

//#define N_VALUES 5
//int main()
//{
//	char values[N_VALUES] = { 0 };
//	char* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES] ;)
//	{
//		//*vp++ = 97;
//		// *vp = 97;
//		// vp++;
//		*vp = 97;
//		*++vp = 97;
//	}
//
//	printf("%s \n", values);
//
//	for (int i = 0; i < N_VALUES; i++)
//	{
//		printf("%c", values[i]);
//	}
//	return 0;
//}

//int count_num_of_1(int num)
//{
//	int count = 0;
//	for (int i = 0; i < sizeof(num) * 8; i++)
//	{
//		if (num ^ 1)
//		{
//			count++;
//		}
//		num >>= 1;
//	}
//	return count;
//}

/*
	5
	00000000 00000101 num
	00000000 00000001 1

	num ^ 1 
	num >> 1
	sizeof - 1
*/
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_num_of_1(num);
//	printf("%d \n", n);
//
//	return 0;
//}


/*
	n = n & (n - 1)
	1111 n
	1110 n-1
	1110 n
	1101 n-1
	//  	n = n & (n - 1)
	每次消除最右的0
*/
//int count_num_of_1(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d", count_num_of_1(num));
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	i--;
//	i > sizeof(i);  // int  -1 >  unsign int 4
//	printf("%zu \n", sizeof(int));
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//
//	for ( i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d \n", i);
//	}
//	return 0;
//}
//void test(char ch1[])
//{
//	
//}
//
//int main()
//{
//	char ch[10] = "abc";
//	test(ch);
//	return 0;
//}

//void test2() { printf("OK!"); }
//void test1() { test2(); }
//void test() { test1(); }
//int main() {
//	test();
//	return 0;
//}

//int main()
//{
//	int a = 305419896;
////	return 0;
////}
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int num = 10;
//	//num = 20; // &num 不变
//
//	////const int num1 = 10;
//	////// num = 20;  // 不可修改
//	////int* p = &num1;  // 取地址改
//	////*p = 20;    //num1 = 20
//
//	//const int num1 = 10;
//	//// num = 20;  // 不可修改
//	//const int* p = &num1;  // 取地址改
//	////*p = 20;    //num1 = 20
//	//int** pp = &p;
//	//**pp = 20;
//
//	/*
//		const  int* p
//		
//	*/
//	int black = 30;
//	const int* p = &num;
//	p = &black;
//
//	int* const p = &num;
//	// const 在*后 表示 该块内存数据不允许被修改
//	// const 在*前 表示 内存数据p指向的内存数据不允许被p修改
//
//	printf("%d\n", num);
//	return 0;
//}