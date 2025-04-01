#include<stdio.h>
int main()
{
	char str[50];
	int i;
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	for(i=0; str[i]!='\0'; i++) {
		if(str[i]>='a' && str[i]<='z') {
			str[i] = str[i] - 32;
		}
	}
	printf("String in upper case: %s", str);
return 0;
}
