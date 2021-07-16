/*Name:Bhonagiri sathvik, roll no:20311A1250
 class:IT(F1) */
#include<stdio.h>
void main()
{ 
  int loc,pos,ele,a[100],size,i;
  printf("enter the size of array\n");
  scanf("%d",&size);
  printf("enter the elements\n");
  for(i=0;i<size;i++)

  {    scanf("%d",&a[i]);
       
  }
printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i <size; ++i) 
  {
     printf("%d\n",a[i]);}
printf("enter the postion to delete element\n");
scanf("%d",&pos );
for(i=pos-1;i,size;i++)
{   
    a[i]=a[i+1];       
}
size=size--;
 /* Print array after deletion */
 printf("\nthe elements after deletion\n");
 for(i=0; i<size; i++)
 {   printf("%d\t",a[i]);
        }
size=size+1; /*to get orginal size of array*/
printf("enter the location to insert an element\n");
scanf("%d", &ele);
scanf("%d",&loc);
printf("enter element to insert\n" );
scanf("%d", &ele);
for(i=size-1;i>loc-1;i--)
{       
     a[i] = a[i-1];
}
a[loc-1] =ele;
        size++; 
 printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", a[i]);
        }
    }