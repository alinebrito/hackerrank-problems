//https://www.hackerrank.com/challenges/pointer-in-c/problem

#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {

	int a_origin = *a;

	*a =  *a + *b;
 	*b = abs((a_origin - *b));

	return;
}

int main() {

	int a, b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);

	return 0;
}


