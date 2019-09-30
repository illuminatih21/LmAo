#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int k,j,no;
printf("Enter Any No. :");
scanf("%d",&no);
while(k!=0)
{
k=no%10;
no=no/10;
j=j+k;
}
printf("Sum of each digit of given no. %d => %d",no,j);
getch();
}
