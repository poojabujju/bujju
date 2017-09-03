#include<stdio.h>
#include<conio.h>
void main()
{
char s[30];
int i,f=0,n=0;
clrscr();
printf("enter the string:");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)

if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||[i]=='7'||s[i]=='8'||s[i]=='9')
{
f=f+1;
}
}
if(f==0)
printf("given string not contains numbers");
else
printf("given string contains numbers");
getch();
}

