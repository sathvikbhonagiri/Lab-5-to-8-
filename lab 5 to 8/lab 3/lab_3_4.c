/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include<stdio.h>
 void main()
{int i,n,k=0;
printf("enter number");
 scanf("%d",&n);
 printf("%d",n);
  for(i=0;i<=n;i++)
  {     if(n%i==0) 
        {k++;
        }   
             }
    if(k==2)
    {printf("it is a prime number");}
    else
    {
      printf("it is not a prime number"); /* code */
    }
}