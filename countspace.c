#include<stdio.h>
int main()
{
int count=0,i;
char a[40];
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='  ')
count++;
}
printf("%d",count);
return 0;
}

