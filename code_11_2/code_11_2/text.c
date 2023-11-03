#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct str {
//    int len;
//    char s[0];
//};
//
//struct foo {
//    struct str* a;
//};
//
//int main(int argc, char** argv) {
//    struct foo f = { 0 };
//    if (f.a->s) {
//        printf(f.a->s);
//    }
//    return 0;
//}

//union var {
//    char c[4];
//    int i;
//};
//
//int main() {
//    union var data;
//    data.c[0] = 0x04;//因为是char类型，数字不要太大，算算ascii的范围~  
//    data.c[1] = 0x03;//写成16进制为了方便直接打印内存中的值对比  
//    data.c[2] = 0x02;
//    data.c[3] = 0x11;
//    //数组中下标低的，地址也低，按地址从低到高，内存内容依次为：04,03,02,11。总共四字节！  
//    //而把四个字节作为一个整体（不分类型，直接打印十六进制），应该从内存高地址到低地址看，0x11020304，低位04放在低地址上。  
//    printf("%x\n", data.i);
//}
//
//int main()
//{
//	unsigned char i = 7;
//	int j = 0;
//	for (; i > 0; i -= 3)
//	{
//		++j;
//	}
//	printf("%d\n", j);
//	 /*
//	 * 7 4 1 -2 -5
//	  00000111  7
//	  00000000  0
//	  10000010   -2
//	  11111101   反码
//	  11111110   补码 254  255 255
//	 */
//	return 0;
//}
// 
int f(int x)
{
	return ((x > 2) ? x * f(x - 1) : 3);
}// 3 * f(2)

int main()
{
	/*int x = 1;
	do
	{
		printf("%2d\n", x++);
	} while (x--);*/

	int i;
	i = f(f(2));

	return 0;
}