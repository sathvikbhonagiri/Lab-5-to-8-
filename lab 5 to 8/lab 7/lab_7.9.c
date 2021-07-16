/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include <stdio.h>
 int strlen(char s[]) 
 {
    int n;
    for (n = 0; *s != '\0'; s++)
       n++;
     return n;
    }

 void main()
 { int i;
      char a[] = "hello";
      char*p = a;
 i= strlen(p);
printf("%d",i);
 }