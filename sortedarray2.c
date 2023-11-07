#include<stdio.h>
int  main()
{
  int ar1[100],ar2[100],n2,n,i,j,n1,temp,temp2;
  printf("Enter the number of elements for first array");
  scanf("%d",&n1);
  printf("Enter the array elements");
  
   for(i=0;i<n1;i++)
     {
      scanf("\n%d",&ar1[i]);
      }
      printf("\nThe entered array is:");
       for(i=0;i<n1;i++)
         {
           printf("\t%d",ar1[i]);
         }
    for(i=0;i<n1;i++)
    {
      for(j=i+1;j<n1;j++)
      {
         if(ar1[i] > ar1[j])
         {
           temp= ar1[i];
           ar1[i]=ar1[j];
           ar1[j]=temp;
         }
      }
    }
     printf("the sorted array is:");
      for(i=0;i<n1;i++)
         {
           printf("\t%d",ar1[i]);
         }
         
         
          printf("\nEnter the number of elements for Second array");
  scanf("%d",&n2);
  printf("\nEnter the array elements");
  
   for(i=0;i<n2;i++)
     {
      scanf("%d",&ar2[i]);
      }
      printf("The entered array is:");
       for(i=0;i<n2;i++)
         {
           printf("\t%d",ar2[i]);
         }
    for(i=0;i<n2;i++)
    {
      for(j=i+1;j<n2;j++)
      {
         if(ar2[i] > ar2[j])
         {
           temp2= ar2[i];
           ar2[i]=ar2[j];
           ar2[j]=temp2;
         }
      }
    }
     printf("the sorted array is:");
      for(i=0;i<n2;i++)
         {
           printf("\t%d",ar2[i]);
         }
          n=n1+n2;
          
          for(i=n1+2,j=1;i<n1,j<n2;i++,j++)
          {
               ar1[i]=ar2[j];
               }
                printf("sorted merged array is:");
                 for(i=0;i<n;i++)
    {
      for(j=i+1;j<n2;j++)
      {
         if(ar2[i] > ar2[j])
         {
           temp2= ar2[i];
           ar2[i]=ar2[j];
           ar2[j]=temp2;
         }
      }
      }
      for(i=0;i<n1;i++)
         {
           printf("\t%d",ar1[i]);
         }
          
    
                
         return 0;
         }
