#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//int main() {
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = { 'a','b','c','\0' };
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	int len3 = strlen(arr3);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	printf("%d\n", len1);  //3
//	printf("%d\n", len2);  //15
//	printf("%d\n", len3);  //3
//
//	printf("c:\\test\n");
//	printf("\a\a\a");
//
//	printf("%c\n", '\'');
//	return 0;

//	int input = 0;
//
//	printf("你要加入bit吗？>");
//	printf("你要好好学习吗：>\n");
//
//	scanf("%d", &input);
//	if (input == 0) {
//		printf("拿个offer\n");
//	}
//	else {
//		printf("回家卖红薯\n");
//	}
//	return 0;
//
//}

//int main() {

	/*int line = 0;
	while (line < 10000)
	{
		printf("代码行数：%d\n", line);
		line++;
	}
	if (line == 10000) {
		printf("好offer\n");
	}*/

	//int num1 = 0;
	//int num2 =0;
	//scanf("%d%d", &num1, &num2);
	//int sum = add(num1, num2);
	//printf("%d", sum);

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//char ch[5] = { 'a','b','c' };


//	return 0;
//}

//int add(int nume1, int num2) {
//	int sum = nume1 + num2;
//	return sum;
//}

//操作符

//typedef unsigned int u_int;
//
//void test() {
//
//	//int i = 1;
//	static int i = 1;
//	i++;
//	printf("%d ", i);
//}
//
//int main() {
//
//	//int i = 0;
//	//~按位取反(二进制)
//	//printf("%d\n", ~i);
//
//
//	//等价
//	//unsigned int num = 100;
//	u_int num = 100;
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//define - 定义宏
#define add(x,y) ((x)+(y))

int main() {
	//printf("%d", add(2, 3));
	printf("%d", add(2, 3));
	return 0;
}