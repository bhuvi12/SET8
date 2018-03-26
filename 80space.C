#include<stdio.h>
#include<conio.h>
int main()
{
int l,i;
char s[100];
printf("\n enter the number:");
scanf("%s",&l);
for(i=0;i<l;i++)
{
if(s[i]%2!=0)
{
printf("%c",s[i]);
}
}return 0;
}
