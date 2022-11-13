#include<stdio.h>

void acceptNumber(int arr[], int size)
{
	for (int i = 0; i < size; i++) {
		printf("arr[%d]=", i);
		scanf_s("%d", &arr[i]);
	}

}

void display(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d  ", arr[i]);
	}
	printf("\n");
}


void bubbleSort(int arr[], int size) {

	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1-i; j++) {
			if (arr[j] > arr[j + 1]) {
				//swaping the number
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


void selectionSort(int arr[], int size) {


	for (int i = 0; i < size-1; i++) {
		int smallest = i;

		for (int j = 1+i; j < size; j++) {
			if (arr[smallest] > arr[j]) {
				smallest = j;
			}
		}
		//swapping of number in index=i and index=smallest
		printf("smallest=%d\n", smallest);
		int temp = arr[smallest];
		arr[smallest] = arr[i];
		arr[i] = temp;
	}
}

void countSort(int arr[], int size) {
	//assuming, only 0 and 1
	int zeroCount = 0;
	int oneCount = 0;

	for (int i = 0; i < size; i++) {
		if (arr[i] == 0) {
			zeroCount++;
		}else if (arr[i] == 1) {
			oneCount++;
		}
	}

	for (int i = 0; i < zeroCount; i++) {
		arr[i] = 0;
	}

	for (int i = zeroCount; i < size; i++) {
		arr[i] = 1;
	}

}
