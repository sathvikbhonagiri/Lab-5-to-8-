/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include <stdio.h>  
#include<string.h>  
void main()  
{  
   char str1[100];  
   char str2[100];    
   int value;   
   printf("Enter the first string : ");  
   scanf("%s",str1);  
   printf("Enter the second string : ");  
   scanf("%s",str2);   
   value=strcmp(str1,str2);  
   if(value==0)  
   printf("strings are same");  
   else  
   printf("strings are not same");   
} 