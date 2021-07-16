/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include<stdio.h>
#include<math.h>
void main()
{
int x,n,i;
lint sum=0;
printf("Enter x,n values : ");
scanf("%d%d",&x,&n);
for(i=1;i<=n;i++)
sum=sum+pow(x,i);
printf(" Sum is : %ld\n",sum);
}