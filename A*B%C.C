#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,sum=0;
printf("\n enter the values");
scanf("%d%d%d",&a,&b,&c);
sum=a*b%c;
printf("\n the result is",sum);
getch();
}
