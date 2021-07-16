/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include<stdio.h>
#include<math.h>
void main()
{  int sum=0,sum1=0,i,a[100];
  float n,avg,var,std;
  printf("enter the no.of values to store\n");
  scanf("%f",&n);
  printf("enter the values u want to store\n");
  for(i=0;i<=n-1;i++)
  { scanf("%d",&a[i]);   
   sum=sum+a[i]; }
    avg=sum/n;
    for(i=0;i<=n-1;i++)
    {sum1=sum1+pow((a[i]-avg),2); }
      var=sum1/n;
      std=sqrt(var);
      printf("the avg is %f\n",avg);
      printf("the variance is %f\n",var);
      printf("the standard deviation is %f\n",std);}