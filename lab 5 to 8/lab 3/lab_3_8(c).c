/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include<stdio.h>
#include<math.h>
void main()
{
 float sum=1.0;
 int fact;
int j,n,x,c=2,i=2;
 float sign=-1.0;
printf(" Enter n,x values :");
scanf("%d%d",&n,&x);
while(c<=n)
{fact=1;
for(j=1;j<=i;j++)
fact=fact*j;
sum=sum+pow(x,i)/fact*sign;
i=i+2;
c=c+1;
sign=sign*-1;
}
printf("The sum is : %f\n",sum);
}