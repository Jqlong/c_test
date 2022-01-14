#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
int main() {
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

	int input = 0;

	printf("你要加入bit吗？>");
	printf("你要好好学习吗：>\n");

	scanf("%d", &input);
	if (input == 0) {
		printf("拿个offer\n");
	}
	else {
		printf("回家卖红薯\n");
	}
	return 0;

}