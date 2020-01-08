#include <stdio.h>
#include <string.h>

int main()
{

  char str1[27] = "a";
  char str2[] = "abcdefghijklmnopqrstuvwxyz";

  for  (int i=0; i<26; i++)
    {
      str1[i]='a'+i;
    }
  str1[26]='\0';

  if (strcmp(str1, str2) == 0)
    printf("the strings are identical\n");
  else
    printf("the strings are different\n");

  for  (int i=0; i<26; i++)
    {
      str1[i]=str1[i]-32;
    }

  if (strcmp(str1, str2) == 0)
    printf("the strings are still identical\n");
  else
    printf("the strings are now different\n");

  char str3[53]="";
  strcpy(str3,str1);
  strcat(str3,str2);
  printf("String 1:%s\nString 2:%s\nString 3:%s\n", str1, str2, str3);

}

