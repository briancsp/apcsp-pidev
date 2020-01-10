#include "student.h"

void printStudent(struct Student* student)
{
  printf("\n");
  printf("First Name: %s\n",student->firstName);
  printf("Last Name: %s\n", student->lastName);
  printf("Age: %d\n", student->age);
  printf("Student ID: %d\n", student->id);
}
