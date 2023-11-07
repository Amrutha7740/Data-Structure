#include<stdio.h>
int main()
{
  int ar1[100],ar2[100],i,n1,n2;
  printf("Enter the number of elements for first array");
  scanf("%d",&n1);
  printf("Enter the array elements");
  
   for(i=0;i<n1,i++)
     {
      scanf("\n%d",&ar1[i]);
      }
      printf("The entered array is:");
       for(i=0;i<n1,i++)
         {
           printf("\t%d",ar1[i]);
         }
    for(i=0;i<n1,i++)
    {
      for(j=i+1,j<n1,j++)
      {
         if(ar1[i] > ar1[j])
         {
           temp= a[i];
           a[i]=a[j];
           a[j]=temp;
         }
      }
    }
     printf("the sorted array is:");
      for(i=0;i<n1,i++)
         {
           printf("\t%d",ar1[i]);
         }
         return 0;
         }
