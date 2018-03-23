#include<stdio.h>
#include<string.h>
void main()
{
char x[10],y[10];
int z,b,j;
printf("\n enter the string");
scanf("%s",&x);
 j=strcpy(y,x);
b=strrev(y);
z=strcmp(x,y);
if(z==0)
{
printf("\n palindrome");
}
else
{
printf("\n not palindrome");
}
}
