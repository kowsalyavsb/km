#include<stdio.h>
int main()
{
char s[40];
int i=0,count=0;
gets(s);
while(s[i]!=0'\0')
{
if(s[i]='0' && s[i]<='5,)
count++;
i++;
}
printf("%d",count);
return 0;
}
