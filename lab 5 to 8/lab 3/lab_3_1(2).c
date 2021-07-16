/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include<stdio.h>
void main()
{
int i=0,n,r;
printf(" Enter num :");
scanf("%d",&n);
printf("Enter Upto Which Range U Want :");
scanf("%d",&r);
do
{
printf(" %d X %d = %d\n",n,i,n*i);
i=i+1;
}
while(i<=r);
}