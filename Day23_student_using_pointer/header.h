struct stud {
	int rollno;
	char name[20];
	int age;
};

typedef struct stud Student;

void acceptStudentDetails(Student* students, int size);
void displayStudent(Student* students, int size);
void updateStudent(Student* students, int size);
int deleteStudent(Student* students, int size);
int addStudent(Student* students, int size);
void cleanScreen();



