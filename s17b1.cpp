#include<stdio.h>
#include<string.h>

int main () {
	char str[10],new_str[10];
	printf("Nhap chuoi: ");
	fgets(str,10,stdin);
	str[strcspn(str,"\n")] = '\0';
	int len = strlen(str);
	int isPalindrome = 1;
	for (int i = 0;i < len / 2; i++) {
		if (str[i] != str[len - i - 1]) {
			isPalindrome = 0;
			break;
		}
	}
	if(isPalindrome) {
		printf("la Palindrome");
	}
	else {
		printf("khong la Palindrome");
	}



	return 0;
}

