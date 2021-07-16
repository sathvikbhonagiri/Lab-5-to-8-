#include<stdio.h>
int fact(int u);
void main()
{int factorial,n;
 printf("enter the number");
  scanf("%d",&n);
   factorial=fact(n);
   printf("%d",factorial); }
int fact(u)
{
     if(u==0||u==1)
    return 1;  
    else 
        return u*fact(u-1);}