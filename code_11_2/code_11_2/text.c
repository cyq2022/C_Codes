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
//    data.c[0] = 0x04;//��Ϊ��char���ͣ����ֲ�Ҫ̫������ascii�ķ�Χ~  
//    data.c[1] = 0x03;//д��16����Ϊ�˷���ֱ�Ӵ�ӡ�ڴ��е�ֵ�Ա�  
//    data.c[2] = 0x02;
//    data.c[3] = 0x11;
//    //�������±�͵ģ���ַҲ�ͣ�����ַ�ӵ͵��ߣ��ڴ���������Ϊ��04,03,02,11���ܹ����ֽڣ�  
//    //�����ĸ��ֽ���Ϊһ�����壨�������ͣ�ֱ�Ӵ�ӡʮ�����ƣ���Ӧ�ô��ڴ�ߵ�ַ���͵�ַ����0x11020304����λ04���ڵ͵�ַ�ϡ�  
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
//	  11111101   ����
//	  11111110   ���� 254  255 255
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