#include<stdio.h>
int main()
{
int k,m;
scanf("%d%d",&k,&m);
printf("\n%d\t%d",k,m);
k=k^m;
m=k^m;
k=k^m;
printf("\n%d\t%d",k,m);
return 0;
}
