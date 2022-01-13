#include <stdio.h>
#include <string.h>
int main() {

	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','b','c','\0' };
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	int len3 = strlen(arr3);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%d\n", len1);  //3
	printf("%d\n", len2);  //15
	printf("%d\n", len3);  //3

	printf("c:\\test\n");
	printf("\a\a\a");

	printf("%c\n", '\'');   
	return 0;

}