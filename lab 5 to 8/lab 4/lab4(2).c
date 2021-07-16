#include<stdio.h>
int isprime(int n);
void main()
{int n,i,flag=0;
 printf("enter number:\n");
 scanf("%d",&n);
 for(i=2;i<=n/2;i++)
 {if(isprime(i)==1)
  {if(isprime(n-i)==1)
    printf("%d=%d+%d\n",n,i,n-i);
   flag=1;
 }
if(flag==0)
printf("cant express\n");
}
int isprime(int n)
{int i,c=1;
 for(i=2;i<=n/2;i++)
 {if(n%i==0)
  {c=0;
    break;}
 }
 return c;
}