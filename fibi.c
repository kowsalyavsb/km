#include<stdio.h>
int main()
{
int i,n,k=0,s=1,t;
scanf("%d",&n);
printf("%d\n%d\n",k,s);
for(i=0;i<n;i++)
{
t=k+s;
k=s;
s=t;
printf("%d\n",s);
}
return 0;
}

