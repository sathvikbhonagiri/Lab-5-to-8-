#include<stdio.h>
int ncr(int n,int r);
void main ()
{int k,i,j,n;
 printf("enter no of rows \n ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {for(j=n-i;j>0;j--)
  printf(" ");
 for(k=0;k<=i;k++)
 printf("%d ",ncr(i,k));
 printf("\n");}
}
int ncr(n,r)
{if(n==r||r==0)
 return 1;
 if(r==1)
 return n;
else
 return ncr(n-1,r)+ncr(n-1,r-1);
}