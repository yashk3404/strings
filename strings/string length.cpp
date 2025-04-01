#include<stdio.h>
int main()
{
	char str[40];
	int length=0;
	int i;
	printf("Enter the string: ");
	fgets(str, sizeof(str), stdin);
	for(i=0;str[i]!='\0';i++) {
		length++;
	}
	printf("The string length is %d", length);
return 0;
}
