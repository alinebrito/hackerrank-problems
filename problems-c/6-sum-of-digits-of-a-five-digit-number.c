//https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem

#include <stdio.h>

int main(){

	int n, sum = 0;

	scanf("%i", &n);

	while(n > 0){
		sum += (n%10);
		n = n/10;
	}

	printf("%i", sum);

	return 0;
}
