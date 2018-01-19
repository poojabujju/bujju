#include<stdio.h>
void main()
{
int n,f,s,t,i;
f=0;s=1;
printf("enter the number");
scanf("%d",&n);
printf("n = %d",n);
for(i=0;i<=n;i++)
{
t=s+f;
f=s;
s=t;
prinf("fibonacci series is : %d",t);
}
}
