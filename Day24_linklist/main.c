#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
#include "header.h"

void main() {
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
		printf("\nEnter the choice: ");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			//size = addStudent(students, size);
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


