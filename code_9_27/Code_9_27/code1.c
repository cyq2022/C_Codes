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
//	printf("%s\n", arr2) ;   //�ַ���������־ '\0��
//	printf("%s\n", arr3) ;    
//
//	int len = strlen(arr3);
//	printf("%d\n", len);  //4
//	printf("%d\n", len);  //4
//
//	return 0;	
//}

// ת���ַ�
int main()
{
	char arr1[] = "abcd";

	printf("abc\0def");
	printf("abc\\0def");  //  "\\"
	printf("\n %c\n", '\'');    //����
	printf("%zu\n", sizeof(arr1));  //5
	printf("\a\a\a\a\n");   // ����
	printf("abcd\rvcd�س�");
	printf("----------");

	printf("\n%c\n", '\130');   // \ddd  �˽��ƻ���ʮ���ƶ�Ӧ��asical�ַ�  
		//-> 'X'
		// \xdd ʮ������ͬ��

	return 0;

}