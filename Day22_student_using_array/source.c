#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include "header.h"


void acceptStudentDetails(Student students[], int size) {
	printf("Enter details of %d students:\n", size);
	for (int i = 0; i < size; i++) {
		printf("Student %d:\n", i + 1);

		printf("Roll no: ");
		scanf_s("%d", &students[i].rollno);

		printf("Name: ");
		fflush(stdin);
		scanf_s("%s", students[i].name, 20);
		//gets(students[i].name);

		printf("Age: ");
		scanf_s("%d", &students[i].age);
		printf("\n");

	}

}

void displayStudent(Student students[], int size) {

	printf("Details of %d students are: \n", size);
	for (int i = 0; i < size; i++) {
		printf("Details of Student %d:\n", i + 1);
		printf("\tRoll no: %d\n", students[i].rollno);
		printf("\tName: %s\n", students[i].name);
		printf("\tAge: %d\n", students[i].age);
		printf("\n");
	}
}


void updateStudent(Student students[], int size)
{
	int roll;
	printf("Enter the student roll no want to update: ");
	scanf_s("%d", &roll);

	for (int i = 0; i < size; i++) {
		if (students[i].rollno == roll) {
			printf("Enter new Name: ");
			fflush(stdin);
			scanf_s("%s", students[i].name, 20);

			printf("Enter new Age: ");
			scanf_s("%d", &students[i].age);
			printf("\n");
			
		}
	}
}


int deleteStudent(Student students[], int size) {
	int roll;
	printf("Enter the student roll no, want to delete: ");
	scanf_s("%d", &roll);
	int idx = -1;
	int newSize = size;

	for (int i = 0; i < size; i++) {
		if (students[i].rollno == roll) {
			idx = i;
		}
	}

	if(idx !=  -1){
		for (int i = idx; i < size - 1; i++) {
			students[i] = students[i + 1];
		}
		newSize = size - 1;
	}
	else {
		printf("\nNo student with roll no: %d", roll);
	}
	
	return newSize;

}

int addStudent(Student students[], int size)
{
	int noOfStudent;
	printf("Enter the  no of student: ");
	scanf_s("%d", &noOfStudent);

	int newSize = size + noOfStudent;
	for (int i = size; i < newSize; i++) {
		printf("Student %d:\n", i + 1);

		printf("Roll no: ");
		scanf_s("%d", &students[i].rollno);

		printf("Name: ");
		fflush(stdin);
		scanf_s("%s", students[i].name, 20);
		//gets(students[i].name);

		printf("Age: ");
		scanf_s("%d", &students[i].age);
		printf("\n");
	}
	return newSize;
}

void cleanScreen() {
	static int count = 0;
	count++;
	if (count % 3 == 0) {
		system("cls");
	}
}