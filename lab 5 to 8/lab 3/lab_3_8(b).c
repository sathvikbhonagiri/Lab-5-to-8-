/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include<stdio.h>
int fact(int r);
{int c,i=1,fact=1;
 while(i<=r)
{fact=fact*i
 i++;}
return fact;}
void main()
{
int n,i,sum=0;
printf("Enter n value : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+fact(i);
}
printf("%d",sum);
}