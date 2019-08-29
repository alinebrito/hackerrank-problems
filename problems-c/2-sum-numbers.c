//https://www.hackerrank.com/challenges/sum-numbers-c/problem

#include <stdio.h>

int main(){

	int number1, number2;
	float number3, number4;

	scanf("%d %d", &number1, &number2);
	scanf("%f %f", &number3, &number4);

	printf("%d %d\n", (number1 + number2), (number1 - number2));
	printf("%.1f %.1f", (number3 + number4), (number3 - number4));

	return 0;
}
