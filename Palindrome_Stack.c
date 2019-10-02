#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 5000

void push(char);
char pop(void);
int top=-1;
char stack[SIZE];

void push(char k)
{
   /* if(top==SIZE-1)
    {
        printf("\nStack Overflow");
        return;
    }
    else*/
    {
        top++;
        stack[top]=k;
    }
}

char pop(void)
{
    /*
    int result = -32768;
    if(top<0)
    printf("\nStack Underflow");
    else*/
    char result;
    {
        result=stack[top];
        top--;
    }
    return result;
}


main()
{
    int n,i,res=1;
    char arr[SIZE];
    printf("Enter the word \n");
    fflush(stdin);
    gets(arr);
    n=strlen(arr);
    if(n%2==0)
    {
        for(i=0;i<(n/2);i++)
        {
            push(arr[i]);
        }
        for(i=(n/2);i<(n);i++)
        {
            if(arr[i]!=pop())
            {
                res=0;
                break;
            }
            else continue;
        }
        if(res==0)
        printf("This is not a palindrome");
        else printf("This is a palindrome");
    }

    else if(n%2!=0)
    {
        for(i=0;i<(n/2);i++)
        {
            push(arr[i]);
        }
        for(i=(n/2)+1;i<(n);i++)
        {
            if(arr[i]!=pop())
            {
                res=0;
                break;
            }
            else continue;
        }
        if(res==0)
        printf("This is not a palindrome");
        else printf("This is a palindrome");
    }
}
