#include<stdio.h>
#include<conio.h>
long int fibo(int);
long int fibo(int n)
{                                             //tn=tn-1+tn-2
long int result;
if((n==1)||(n==2))
result=1;
else
result = fibo(n-1)+fibo(n-2);
return result;
}




main()
{
int n;
long int result;
//clrscr();
printf("\nEnter the term ");
scanf("%d",&n);
result = fibo(n);
printf("\n%ld",result);
getch();
}
