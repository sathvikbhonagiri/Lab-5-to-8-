#include<stdio.h>
int sum(int u);
void main()
{int m,n,s1,s2;
 printf("enter two numbers:");
 scanf("%d%d",&n,&m);
   s1=sum(m);
   s2=sum(n);
   if(s1==n&&s2==m)
   { printf("they are amicable");}
   else 
   printf("they are not amicable"); }
   int sum(u)
   { int i,sum=0;
     for(i=1;i<u;i++)
      {if(u%i==0)
      sum=sum+i; }     
       return sum;   }