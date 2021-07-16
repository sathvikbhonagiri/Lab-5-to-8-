/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include<stdio.h>
int fact(int n);
void main()
{int n;
 int sum=0;
 printf("enter number\n");
 scanf("%d",&n);
 int k=n;
 int r;
while(k!=0)
 {r=k%10;
  int f=fact(r);
  k=k/10;
  sum=sum+f;
 }
if(sum==n)
printf("it is strong numbe");
else
printf("not strong ");
}
int fact(int n)
{int c=1;
  for(int i=1;i<=r;i++)
   {c=c*i;
     return c;}
}