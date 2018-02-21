#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,d,i,sum;
printf("\n enter the values");
scanf("%d%d%d",&n,&d,&a);
for(i=n;i>1;i--)
{
sum=sum+(a+((n-1)*d));
}
printf("\n ",sum);
}


