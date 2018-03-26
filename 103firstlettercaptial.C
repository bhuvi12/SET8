#include<stdio.h>
void main()
{
char ch[30];
int i,l;
printf("\n enter the string:");
scanf("%s",&ch);
l=strlen(ch);
ch[0]=toupper(ch[0]);
for(i=0;i<l;i++)
{
if(ch[i]==32)
{
ch[i+1]=toupper(ch[i+1]);
}
}
printf("\n the string is:%s",ch);
}
