#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//#include "add.h"   // 函数定义头文件

//int main()
//{
//	int  a = 10;
//	int  b = 20;
//	printf("%d " , ADD(a,b));
//	return 0;
//}

//void print(unsigned int num)
//{
//	if (num / 10 != 0) //1234
//	{
//		 //num前进一位  1 2 3 4
//		print(num / 10);
//	}
//	printf("%u ",num % 10 );
//}
//
//int main()
//{
//	unsigned int num = 0;
//
//	scanf("%u", &num);
//	print(num);
//
//	return 0;
//}
//
//int main()
//{
//	//printf("%d  ", strlen("abc\0zcvv"));
//
//	char arr[] = "abc";
//
//	printf("%p\n", arr); 
//	printf("%c\n", *arr); //a
//	printf("%c", *(arr+1)); //b
//	
//	return 0;
//}

//int my_strlen(char *arr)
//{
//
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//
//	}
//	return 0;
//}
///*
//	abc 
//	1 bc
//	1 1 c \0
//	1 1 1  return
//*/
//
//int main()
//{
//	char arr[] = "abcdefg";
//
//	printf("%d \n", my_strlen(arr));
//	printf("%c \n" , *(arr+1));
//
//	return 0;
//}