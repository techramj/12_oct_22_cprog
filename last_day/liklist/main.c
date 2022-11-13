#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
#include "header.h"


void printArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}


void main() {
	int arr[10] = { 2,1,2,0,0,1,0,2,1,0 };
	printArr(arr,10);
	//bubble sort

	int a = 0, b = 0, c = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[i] == 0) {
			a++;
		}else if (arr[i] == 1) {
			b++;
		}else if (arr[i] == 2) {
			c++;
		}
	}

	for (int i = 0; i < a; i++) {
		arr[i] = 0;
	}

	for (int i = a; i < a+b; i++) {
		arr[i] = 1;
	}

	for (int i = a+b; i < 10; i++) {
		arr[i] = 2;
	}

	printArr(arr,10);



}

void main1() {
	node* head;

	int studentCount;
	int size;
	int choice;
	char ans = 'y';

	printf("Enter the number of student: ");
	scanf_s("%d", &studentCount);
	size = studentCount;

	head = createNode(studentCount);


	do {
		printf("\n1. Add student");
		printf("\n2. Display student details");
		printf("\n3. Update student details");
		printf("\n4. Delete student");
		printf("\n5. Exit");
		printf("\n6. sorting by rollno");
		printf("\n6. sorting by age");
		printf("\n6. sorting by Name");
		printf("\nEnter the choice: ");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			head = addStudent(head);
			break;
		case 2:
			displayStudent(head);
			break;
		case 3:
			//updateStudent(students, size);
			break;
		case 4:
			head = deleteNode(head);
			break;
		case 5:
			exit(0);
		default:
			printf("Invalid choice: ");
			break;
		}
		printf("\nDo you want to continue(Y/N): ");
		fflush(stdin);
		//scanf_s("%c", &ans);


	} while (ans != 'N' && ans != 'n');

	
}


