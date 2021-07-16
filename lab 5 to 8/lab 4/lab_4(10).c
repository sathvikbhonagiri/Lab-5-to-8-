#include<stdio.h>
int fibonnaci(int n)
{
   if (n== 1)
      return n;
   else if(n==0)
       return n;
   else
   return fibonnaci(n-1) + fibonnaci(n-2);
}
 
int main ()
{
  int n = 9;
  printf("%d", fib(n));
  return 0;