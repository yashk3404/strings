#include<stdio.h>
int main()
{
	char str[50];
	int vowel=0, i;
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	for(i=0; str[i]!='\0'; i++) {
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
			vowel++;
		}
	}
	printf("Total count of vowels = %d", vowel);
	return 0;
}
