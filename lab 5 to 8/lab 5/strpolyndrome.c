/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include<stdio.h>
#include<string.h>
void main()
{  char s1[100];
   char s2[100];
   int check;
 printf("enter the string\n");
 gets(s1);
 strcpy(s2,s1);
 strrev(s2);
 printf("%s",s2);
 check=strcmp(s1, s2);
 printf("\n%d",check);
 if(check!=0)
 { printf("\nit is not a polyndrome\n");}
  else
  printf("\nit is a polyndrome\n");   }