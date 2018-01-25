#include <stdio.h>
#include<string.h>
int main(void) 
{
	char s[20],p[20];
	int len,len1,i,j,count=0;
	scanf("%s\n",s);
	scanf("%s\n",p);
	len=strlen(s);
	len1=strlen(p);
	if(len==len1)
	{
		for(i=0;i<len;i++)
		{
			if(s[i]==p[i])
			{
				count=0;
				
			}
			else
			count=count+1;
		}
		if(count==1)
		{
			printf("yes\n");
		
		}
		else
		printf("no\n");
		}
	else
	printf("no\n");
	return 0;
	
	}
	
 
