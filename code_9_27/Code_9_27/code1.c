#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

//#define PAI = 3.1415926;
//
//const int a = 3.1415926;
//
//enum Color {
//	Red,
//	Blue
//};
//
//int main()
//{
//
//}

//
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = { 'a','b','c','d' };
//	char arr3[] = { 'a','b','c','d' ,'\0'};   //  strlen(arr3) = 4;
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2) ;   //字符串结束标志 '\0’
//	printf("%s\n", arr3) ;    
//
//	int len = strlen(arr3);
//	printf("%d\n", len);  //4
//	printf("%d\n", len);  //4
//
//	return 0;	
//}

// 转义字符
int main()
{
	char arr1[] = "abcd";

	printf("abc\0def");
	printf("abc\\0def");  //  "\\"
	printf("\n %c\n", '\'');    //换行
	printf("%zu\n", sizeof(arr1));  //5
	printf("\a\a\a\a\n");   // 警告
	printf("abcd\rvcd回车");
	printf("----------");

	printf("\n%c\n", '\130');   // \ddd  八进制换成十进制对应的asical字符  
		//-> 'X'
		// \xdd 十六进制同上

	return 0;

}