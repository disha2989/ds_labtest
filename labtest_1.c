#include<stdio.h>
#include<stdlib.h>

// stack2----------even


int top1=-1,top2=-1,top3=-1;
void push1(int stack[], int ele,int size)
{
    if (top1==size-1)
    {
        printf("Stack overflow");
    }
    else
    {
        top1++;
        stack[top1]=ele;
    }
}
void push2(int stack[], int ele,int size)
{
    if (top2==size-1)
    {
        printf("Stack overflow");
    }
    else
    {
        top2++;
        stack[top2]=ele;
    }
}
void push3(int stack[], int ele,int size)
{
    if (top3==size-1)
    {
        printf("Stack overflow");
    }
    else
    {
        top3++;
        stack[top3]=ele;
    }
}

int pop(int stack[])
{
    int popele;
    if(top1==-1)
    
       return -1;
      
    else
    {
        popele=stack[top1];
        top1--;
        return (popele);
    }
     
     
}

void display1(int stack[])
{
    int i;
    printf("The stacked plates on pile:\n");
    for(i=top1;i>=0;i--)
    {
        
        printf("%d\t",stack[i]);
    }
  printf("\n");
}
void display2(int stack[])
{
    int i;
   
    for(i=top2;i>=0;i--)
    {
        
        printf("%d\t",stack[i]);
    }
    printf("\n");
}
void display3(int stack[])
{
    int i;
   
    for(i=top3;i>=0;i--)
    {
        
        printf("%d\t",stack[i]);
    }
   printf("\n");
}

        
int main(int argc, char **argv)
{
        int size1;
        int num;
        
        printf("enter the no of stacked plates\n");
        scanf("%d",&size1);
	int stack1[size1];
        int stack2[size1];
        int stack3[size1];
       printf("enter the stacked plate numbers\n");
        for (int i=0;i<size1;i++)
          {
           scanf("%d",&num);
           push1(stack1,num,size1);
          }
display1(stack1);
        for(int i=0;i<size1;i++)
          {
            num=pop(stack1);
            if(num%2 ==0)
              push2(stack2,num,size1);
             else
              push3(stack3,num,size1);
           }
printf("plates on table 1\n");
        display2(stack2);
printf("plates on table 2\n");
        display3(stack3);

}

