#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include "header.h"


void main() {
	int studentCount;
	int size;
	int choice;
	char ans = 'y';

	Student students[1000];

	printf("Enter the number of student: ");
	scanf_s("%d", &studentCount);
	size = studentCount;

	acceptStudentDetails(students, size);


	do {
		//cls();
		cleanScreen();
		printf("\n1. Add student");
		printf("\n2. Display student details");
		printf("\n3. Update student details");
		printf("\n4. Delete student");
		printf("\n5. Exit");
		printf("\nEnter the choice: ");
		scanf_s("%d", &choice);

		switch (choice) {
		case 1:
			size = addStudent(students, size);
			break;
		case 2:
			displayStudent(students, size);
			break;
		case 3:
			updateStudent(students, size);
			break;
		case 4:
			size = deleteStudent(students, size);
			break;
		case 5:
			exit(0);
		default:
			printf("Invalid choice: ");
			break;
		}
		printf("\nDo you want to continue(Y/N): ");
		fflush(stdin);
		

	} while (ans == 'Y' || ans == 'y');

}