#include<stdio.h>
#include<stdlib.h>
 struct node {
       int data;
       struct node * next;
       };
       
 struct List
 {
  struct node*head;
  };
  
  
  struct node*create()
  {
    struct node*t=(struct node*) malloc (sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&t->data);
    t->next=NULL;
    return t;
    }
    
    void insertB(struct List*list)
    {
    struct node*temp=create();
    temp->next=list->head;
    list->head=temp;
    }
    
    void deleteB(struct List*list)
    {
      if(list->head==NULL)
      
      {
      printf("Empty list");
      }
      
      else
      {
      struct node*p=list->head;
      printf("Deleted element is:%d",p->data);
      list->head=list->head->next;
      free(p);
      }
      }
      
      void insertE(struct List*list)
      {
      struct node*te=create();
      if(list->head==NULL)
      {
      list->head=te;
      }
      else
      {
      struct node*q=list->head;
      
      
      while(q->next!=NULL)
      {
      q=q->next;
      }
      q->next=te;
      }
      }
      
      
      void deleteE(struct List*list)
      {
      if(list->head==NULL)
      
      {
         printf("Emptylist");
         }
           
           else if(list->head->next==NULL)
           {
              struct node*t=list->head;
              printf("Deleted element is:%d",t->data);
              list->head=NULL;
              free(t);
              }
              }
              
       void deleteC(struct List*list)
       
       {
         int ele;
         if(list->head==NULL)
         {
         printf("Emptylist");
         }
         else
            printf("Enter the data to be deleted");
            
            scanf("%d",&ele);
            if(list->head->data==ele)
            
            {
             struct node*t=list->head;
             list->head=list->head->next;
             free(t);
             }
             
             else
             {
              struct node*t=list->head->next;
              struct node*p=list->head;
              while(t!=NULL)
              
              {
                if(t->data==ele)
                {
                
                p->next=t->next;
                free(t);
                break;
                }
                
                p=t;
                t=t->next;
                }
                
                
                if(t==NULL)
                {
                printf("%d is not present",ele);
                }
                
               } 
               }
    void display(struct List*list)
        {
            if(list->head==NULL)
             printf("Empty list");
          
          
             else
             
             {
                 struct node*p=list->head;
                 while(p!=NULL)
                 {
                 printf("\t %d",p->data);
                 p=p->next;
                 }
                 }
                 }
                 
                 
              int main()
              
              {
                struct List*head=NULL;
                int ch;
                do
                {
                  printf("\n Enter your choice  \n 1.InsertB \n2.insertE\n 3.DeleteB  \n 4.DeleteC \n 6.Display \n7.Exit\n");
                  
                  
                   scanf("%d",&ch);
                   
                    switch(ch)
                    {
                       case 1:
                                insertB(head);
                                break;
                        case 2:
                                insertE(head);
                                break;
                        case 3:
                                deleteB(head);
                                break;
                        case 4:
                                deleteE(head);
                                break;
                        case 5:
                                deleteC(head);
                                break;
                         case 6:
                                display(head);
                                break;
                         case 7:
                                exit(0);
                          default:
                                 printf("Invalid Choice");
                                }
                                
                                
                                  }while(1);
                                      }
                        
                              
