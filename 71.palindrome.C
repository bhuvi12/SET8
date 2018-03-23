#include<stdio.h>
#include<string.h>
int main()
{
int r,temp,sum=0,s;
char name[20]="lappal";
printf("the string is%d",&s);
temp=s;
while(s>0)
{
r=s%10;
sum=(sum*10)+r;
s=s/10;
}
if(temp==sum)
{
printf("palindrome");
}
else
{
printf("not a palindrome");
}
return 0;
}
