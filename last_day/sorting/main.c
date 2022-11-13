#include<stdio.h>
#include "header.h"


void main() {

	int arr[200];
	int size;

	printf("enter the size of array: ");
	scanf_s("%d", &size);

	acceptNumber(arr, size);
	printf("before sorting:\n");
	display(arr, size);

	//selectionSort(arr, size);
	countSort(arr, size);
	printf("\nAfter sorting(countSort):\n");
	display(arr, size);


}