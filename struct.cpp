#include <stdio.h>
#include <stdlib.h>

struct Student{
	char name[22];
	char major[22];
	int age;
	double gpa;
};

int main(){

struct Student student1;
student1.age = 22;
student1.gpa = 3.2;
strcpy( student1.name, "Tony");
strcpy( student1.major, "Business");

printf("%f", stduent1.gpa);

	return 0;
}
