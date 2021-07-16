/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include<stdio.h>
void main()
{
   char operator;
    float num1,num2,result=0;
   printf("enter an operator(+,-,*,/) ");
   scanf("%c",&operator);
   printf("enter two nums: ");
    scanf("%f%f",&num1,num2);
switch(operator)
{
case 1: printf(" The Sum is : %d\n",a+b);
          break;
case 2: printf(" The Subtraction is : %d\n",a-b); 
        break;
case 3: printf(" The Multiplication is : %d\n",a*b); 
        break;
case 4: printf(" The Division is : %f\n",(float)a/b); 
         break;
default: printf("invalid operator");
}