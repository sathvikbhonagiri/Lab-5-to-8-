#include<stdio.h>
int isprime(int n)
{ int i;
   for(i=2;i<=n;i++)    
    {if(n%i==0)
      return 0;
      }  return 1;   }
void main()
{ int p,k;
  printf("enter the number:");
  scanf("%d",&p);
 k=isprime(p);
 printf("%d",k);
}   