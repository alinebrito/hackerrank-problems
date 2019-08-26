//https://www.hackerrank.com/challenges/playing-with-characters/problem

#include <stdio.h>

int main(){
	char ch;
	char s[30];
	char sen[30];
	
	//Reading character
	scanf("%c", &ch);

	//Reading string
	scanf("%s", s);

	//Newline character from the previous line
	scanf("\n");

	//Reading sentence
	//^\n : input until a newline is not encountered.
	//%*c :  read the newline character, * to  discart the newline character.
	scanf("%[^\n]%*c", sen);

	printf("%c\n", ch);
	printf("%s\n", s);
	printf("%s\n", sen);

	return 0;
}
