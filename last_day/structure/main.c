#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#include"header.h"

void main1() {
	//struct Emp emp;

	Employee emp;
	emp.id = 10;
	printf("Enter name: ");

	scanf_s("%s", emp.name, 20);
	emp.salary = 2000;

	int a = 10;

	int* ptr = &a;
	printf("a=%d", *ptr);

	Employee* ptr1 = &emp;
	printf("\nid= %d,  name=%s,   salary=%d", emp.id, emp.name, emp.salary);
	printf("\nid= %d,  name=%s,   salary=%d", ptr1->id, ptr1->name, ptr1->salary);


}