struct stud {
	int rollno;
	char name[20];
	int age;
};

typedef struct stud student;





struct Node {
	student data;
	struct Node* next;
};

typedef struct Node node;

node* createNode(int size);
void acceptData(node* ptr);
void displayStudent(node* head);
node* deleteNode(node* head);