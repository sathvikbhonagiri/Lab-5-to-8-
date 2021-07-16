/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include<stdio.h>
void main()
{ 
  int temp,max,min,i,c,d,a[100],size;
  printf("enter the size of array\n");
  scanf("%d",&size);
  printf("\nenter the numbers\n");
for(i=0;i<size;i++)
{ scanf("%d",&a[i]);}
  min =a[0];
  max=a[0];
 for(i=0;i<size;i++) 
 {  if(min>=a[i])
    {min=a[i];
     c=i;}            
} 
printf("the min value is%d\n",min);
printf("the min value is found at%d\n",c+1);
 for(i=0;i<size;i++) 
 {  if(max<=a[i])
   { max=a[i]; 
    d=i; } }
printf("the max value is%d\n",max); 
printf("the max value is found at%d\n",d+1);
temp=a[c];
a[c]=a[d];
a[d]=temp;
printf("the elements after swapping are\n");
for(i=0;i<size;i++)
{  
   printf("\t%d",a[i]); }
 }
