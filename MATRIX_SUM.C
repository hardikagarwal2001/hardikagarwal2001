#include<stdio.h>
#include<conio.h>

main()
{
int arr1[3][3],arr2[3][3];
int i,j;
//clrscr();

for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
	printf("\nEnter the val of a%d%d ",i,j);
	scanf("%d",&arr1[i-1][j-1]);
	}
}
//clrscr();

for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
	printf("\nEnter the val of b%d%d ",i,j);
	scanf("%d",&arr2[i-1][j-1]);
	}
}

//clrscr();

printf("\n\n");
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	printf("\t%d",arr1[i-1][j-1]);
printf("\n");
}
printf("\n\t\t+\n\n");

for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	printf("\t%d",arr2[i-1][j-1]);
printf("\n");
}
printf("\n\t\t=\n\n");

for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	printf("\t%d",arr1[i-1][j-1]+arr2[i-1][j-1]);
printf("\n");
}
getch();
return 0;
}
