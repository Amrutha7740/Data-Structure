#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 struct node {
       int data;
       struct node * next;
       };
       
  struct node*head;
  
   void insert() {
   int x;
   struct node*ptr=(struct node *) malloc(sizeof(struct node));
   if(ptr==NULL)
   printf("Overflow");
   else 
   printf("Enter the value to be inserted");
   scanf"%d",&x);
   
    if(start==NULL)
    {
    ptr->data=x;
    ptr->next=NULL;
    start=ptr;
    printf("The element inserted is  %d",ptr->data);
    }
    
    else
    {
      ptr->data=x;
      ptr->next=start;
      start=ptr;
      printf("The element inserted is %d",ptr->) //not completed
   }
   }
   ]
   
   void delete()
   {
   int x;
   struct node*ptr=(struct node*) malloc(sizeof(struct node));
   if(start==NULL)
   {
    printd("Underflow");
    
    }
    
     else
     {
     ptr=start;
     ptr->next=start;
     x=ptr->data;
     free(ptr);
     printf("The element deleted is %d",x);
     }
     }
     
     
       void display()
       {
         struct node*ptr;
         ptr=(struct node*) malloc(sizeof(struct node));
         ptr=start;
         if(start==NULL)
         {
         printf("Underflow");
         }
         else
         {
          printf("The values of the linked list are:");
          while(ptr->next!=NULL
          {printf("%d",ptr->data);
          ptr=ptr->next;
          }
          }
          }
          
          
          void main()
          {
             int ch;
             printf("\n some of the linkedlist operations are:");
             printf("\n 1.insert\n 2.delete \n 3.display \n 4.Exit");
             
             
             while(1)
             {
             printf("\nEnter your choice");
             scanf("%d",&ch);
             
             
             switch(ch)
             {
                case 1:
                         insert();
                         break;
                case 2:
                         delete();
                         break;
                case 3:
                           display();
                           break;
                case 4:
                          exit;
                          break;
                          
                 default:
                      printf("Invalid choice");
                      }
                      }
                      }
