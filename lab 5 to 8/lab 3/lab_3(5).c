/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include<stdio.h>
void main()
{
  int n,rem,sum=0,i;
  printf("enter a number \n");
  scanf("%d",&n);
 for(i=1;i<n;i++)
 {rem=n%10;
 if(rem==0)
 sum=sum+i;
 }
if(sum==n)
printf("it is perfect number ");
else
printf("it is not perfect number");
}