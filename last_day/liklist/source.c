#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<malloc.h>
#include<string.h>
#include "header.h"

node* createNode(int size)
{
	node* head = NULL;
	node* temp = NULL;
	node* prev = NULL;

	for (int i = 0; i < size; i++) {
		temp = (node*)malloc(sizeof(node));
		acceptData(temp);
		
		if (i != 0 && prev != NULL) {
			prev->next = temp;
		}
		prev = temp;
		if (i == 0) {
			head = temp;
		}	
	}

	return head;
}

void acceptData(node* ptr) {

	printf("\nEnter rollno: ");
	scanf_s("%d", &ptr->data.rollno);

	printf("Enter name: ");
	fflush(stdin);
	scanf_s("%s", ptr->data.name, 20);

	printf("Enter age: ");
	scanf_s("%d", &ptr->data.age);

	ptr->next = NULL;

}

void displayStudent(node* head)
{
	node* temp = head;
	while (temp != NULL) {
		printf("\n\tRoll no:%d", temp->data.rollno);
		printf("\n\tName:%s", temp->data.name);
		printf("\n\tAge:%d", temp->data.age);
		printf("\n");
		temp = temp->next;	
	}
}


node* deleteNode(node* head) {
	int num;
	node* temp = head;
	node* prev = NULL;
	printf("Enter which node you want to delete: ");
	scanf_s("%d", &num);

	if (num == 1) {
		temp = temp->next;
		free(head);
		return temp;
	}

	for (int i = 0; i < num-1; i++) {
		prev = temp;
		temp = temp->next;
	}

	prev->next = temp->next;
	free(temp);

	return head;

}

node* addStudent(node* head) {
	int choice, idx;
	node* temp = NULL;
	node* prev = NULL;
	node* newNode  = NULL;
	printf("Where you want to insert: ");
	printf("\n1. First Node\n2. Last Node\n3. After Node n:");
	printf("\nEnter the choice: ");
	scanf_s("%d", &choice);

	int len = size(head);
	temp = head;
	newNode = (node*)malloc(sizeof(node));
	acceptData(newNode);

	switch (choice) {
	case 1:
		newNode->next = head;
		head = newNode;
		break;
	case 2:
		for (int i = 0; i < len - 1; i++) {
			prev = temp;
			temp = temp->next;
		}
		temp->next = newNode;
		break;
	case 3:
		printf("\nAfter which node you want to add ?");
		scanf_s("%d", &idx);
		if (idx > len) {
			printf("\nThere is only %d node: ", len);
			break;
		}
		for (int i = 0; i < idx ; i++) {
			prev = temp;
			temp = temp->next;
		}
		prev->next = newNode;
		newNode->next = temp;

		
	default:
		printf("\nInvalid entry: ");
	}

	return head;
}

int size(node* head) {
	node* temp = head;
	int count = 0;
	while (temp != NULL) {
		count++;
		temp = temp->next;
	}
	return count;
}