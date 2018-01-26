#include <stdio.h>

int main(void) {
	int a=37,b=73,t;
	t=a;
	a=b;
	b=t;
	printf("%d\t%d",a,b);
	return 0;
}
