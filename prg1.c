#include<stdio.h>
int s[10],top,n,i,ele;
int main()
{ 
printf("Enter a choice\n");
 scanf("%d",&choice);
 do
 {
   switch(choice)
   {
     case 1: push();
             break;
     case 2: pop();
             break;
     case 3: display();
             break;
     default: printf("wrong choice\n");
   }while(choice<=4);
}
void push()
{
    if(top>=n-1)
    {
      printf("stack overflow\n");
    }
  else
    printf("Enter an element\n");
    scanf("%d",&ele);
      top++;
  s[top]=ele;
}
 void pop()
 {
   if(top<=-1)
   {
     printf("stack overflow\n"0;
    }
            printf("the element is popped %d",s[top]);
            top--;
  }     
   void display()
            {
              for(i=top;i>0;i--)
                printf("%d\n",stack[i]);
            }
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
 
