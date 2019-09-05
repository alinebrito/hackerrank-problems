//https://www.hackerrank.com/challenges/arrays-ds/problem

#include <stdio.h>
#include <stdlib.h>
#define SIZE_MAX 10000

int * reverseArray(int * array, int size){

	int i;
	int * array_reverse = malloc(size * sizeof(int));

	for (i = 0; i < size; i++){
		*(array_reverse + (size - 1 - i)) =  *(array + i);
	}
	return array_reverse;
}

int main(){

	int value, size, i;
	int *array = malloc(SIZE_MAX  * sizeof(int));
	int *array_reverse = malloc(SIZE_MAX  * sizeof(int));

	scanf("%i", &size);

	for(i=0; i<size; i++){
		scanf("%i", &value);
		*(array+i) =  value;
	}

	array_reverse = reverseArray(array, size);

	for(i=0; i<size; i++){
		printf("%i ", *(array_reverse + i));
	}
	
	return 0;
}
