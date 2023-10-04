#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
// 逆序字符串 abcdef
// a bcde f

//void reverse(char *arr, int i )
//{
//	char temp = arr[i];     // a   f
//	arr[i] = arr[strlen(arr) - 2 - i];
//	arr[strlen(arr) - 2 - i] = '\0';
//	if (i >= strlen(arr) - 2 - i)return;
//	reverse(arr, ++i);
//	arr[strlen(arr) - 2 - i] = temp;
//	
//}

/*
	a bcde f
	f bcde a
	fe cd ba

	交换af 递归bcde
		int i = 0;
		char temp = arr[i];
		arr[i] = arr[strlen(arr)-2-i];
		arr[strlen(arr)-2-i] = '\0';
		if(i >= strlen(arr)-2-i )return;
		reverse(arr, i+1);
//		arr[strlen(arr)-2-i] = temp;
//		i++;
//
//*/
//void reverse(char* str)
//{
//	char temp = *str; 
//	int len = strlen(str);   // 数组长度6
//	//printf("%d\n", sizeof(str));// 地址8
//	*str = *(str + len - 1); //交换首尾
//	*(str + len - 1) = '\0'; // 末尾为0
//	if (strlen(str + 1) >= 2)reverse(str + 1);
//	//else return;
//	*(str + len - 1) = temp;
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	char* s = str;
//	//printf("%d\n", strlen(str)); //6
//	//printf("%d\n", strlen(s));   //6
//	//printf("%d\n", strlen(s + 1));   //5
//	//printf("%d\n", sizeof(s));// 地址8
//	//printf("%d\n", sizeof(str));// 数组7  包含\0  
//	reverse(str);
//	printf("%s\n",str);
//	return 0;
//}


/*
	求二进制中 1 的个数
	0000 0101
	0000 0001  a & 1 = 1 ; 有1；
	0000 0001  1

	存1 num


	右移
*/
//
//int main()
//{
//	int a = 5;
//	int sz = sizeof(a) * 8;
//	int num = 0;
//	printf("%d\n", sz);
//
//	for ( int i = 0; i < sz - 1; i++)
//	{
//		if (a & 1 == 1)
//		{
//			num++;
//		}
//		a = a >> 1;
//	}
//
//	printf("%d\n", num);
//
////	return 0;
////}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr)); // 8
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));  // 8
//	printf("%d\n", strlen(ch));  // 3
//}
//
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 1,2,3 };
//	printf("%d \n", sizeof(arr)); // 40
//	printf("%d \n", sizeof(ch)); // 10
//	printf("------------------\n");
//	printf("%d\n", strlen(ch));    //3
//	test1(arr);  
//	test2(ch);
//	return 0;
//}


//int main()
//{
//	char ch[] = "abc";
//	
//	//*ch = *("def");
//	printf("%s \n", ch);   //abc
//	printf("%d \n", strlen(ch)); // 3
//	printf("%d \n", sizeof ch);  // 4
//	printf("%c \n", *ch);        // a
//	return 0;
//
//}

//int main()
//{
//	char a = 97;
//	char b = 1;
//	char c = a + b;
//	printf("%c \n",c);
//	return 0;
//}

//
//int main()
//{
//	char c = 387;       
//	//  先整型提升后截断 最后存储
//	//  00000000 00000000 00000001 1000 0011
//	printf("%d \n", c); // -125    1000 0011
//	return 0;
//}


/*
	走台阶
	1    1
	2    2

	9    1 + 8   或者   2 + 7
	n    fib(n - 1) + fib(n - 2)
*/

//int fib(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n == 2)
//	{
//		return 2;
//	}
//
//	return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d \n", fib(n));
//	return 0;
//}



int main()
{
	char ch1[100] = 
		"abcdefghigklmnopqrstuvwxyz";
	char ch2[5] = { 'a','b','c' };
	char* p1 = NULL;
	char* p2;
	char* p3 = ch2;
	p1 = ch1;
	p2 = ch1;
	p3 = ch1;
	return 0;
}