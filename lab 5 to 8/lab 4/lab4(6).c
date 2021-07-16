#include<stdio.h>
int ncr(int n,int r);
void main ()
{int k,p,o;
 printf("enter values\n ");
 scanf("%d%d",&p,&o);
 k=ncr(p,o);
printf("%d",k);
}
int ncr(n,r)
{if(n==r||r==0)
 return 1;
 if(r==1)
 return n;
else
 return ncr(n-1,r)+ncr(n-1,r-1);
}