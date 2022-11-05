#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include "header.h"
#include<malloc.h>


void main() {
	int studentCount;
	int size;
	int choice;
	char ans = 'y';

	Student* studentPtr;;

	printf("Enter the number of student: ");
	scanf_s("%d", &studentCount);
	size = studentCount;

	studentPtr = (Student*)malloc(studentCount * sizeof(Student));


	acceptStudentDetails(studentPtr, size);


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
			size = addStudent(studentPtr, size);
			break;
		case 2:
			displayStudent(studentPtr, size);
			break;
		case 3:
			updateStudent(studentPtr, size);
			break;
		case 4:
			size = deleteStudent(studentPtr, size);
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