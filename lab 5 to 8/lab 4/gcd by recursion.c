#include<stdio.h>
 int gcd(int a,int b);
void main()
{  int o,p,g;
 printf("enter the values:");
  scanf("%d%d",&o,&p);
   g=gcd(o,p);
   printf("%d",g);}
   int gcd( a, b)
    { if (a==0)
    return b;
      if(b==0) 
      {return a;}
       else 
       {return gcd(b,a%b);} } 
