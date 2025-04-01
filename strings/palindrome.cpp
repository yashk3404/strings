#include<stdio.h>
#include<string.h>
int main()
{
	char str[50], Pdrome[50];
	int i, n;
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	n = strlen(str);
	for(i=0; i<n; i++) {
		Pdrome[n-i-1]=str[i];
	}
	Pdrome[n]='\0';
	int isPalind=1;
	for(i=0; i<n; i++) {
		if(Pdrome[i]!=str[i]) {
			isPalind=0;
			break;
		}
	}
	if(isPalind) {
		printf("The string is a palindrome.");
	} else {
		printf("The string is not a palindrome.");
	}
return 0;
}
