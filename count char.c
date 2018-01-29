#include<stdio.h>
int main()
{
int count=0,i;
char g[40];
scanf("%[^\n]s",g);
for(i=0;g[i]!='\0';i++)
{
if(g[i]=='  ')
count++;
}
printf("%d",count+1);
return 0;
}

