#include <stdio.h>
#include "student.h"

int main()
{
  struct Student studentArray[5];
  char input[256];

  int done = 0;
  char answer = 'n';
  int total=5;
  int count = 0;

  for(int i = 0; i < total; i++) {
    count++;
    printf("Enter student name:\n");
    fgets(input,256,stdin);
    sscanf(input,"%s",studentArray[i].firstName);
    printf("Enter student last name:\n");
    fgets(input,256,stdin);
    sscanf(input,"%s",studentArray[i].lastName);
    printf("Enter student age:\n");
    fgets(input,256,stdin);
    sscanf(input,"%d",&(studentArray[i].age));
    printf("Enter student ID:\n");
    fgets(input,256,stdin);
    sscanf(input,"%d",&(studentArray[i].id));
    if(count!=total) {
      printf("Enter 'y' if done\n");
      fgets(input,256,stdin);
      sscanf(input,"%c",&answer);
      if(answer=='y')
          break;
   }
 }

  for (int i=0; i<count; i++) {
    printStudent(&studentArray[i]);
  };
}


