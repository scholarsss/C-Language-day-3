#include<stdio.h>
void exchange(int x,int y)
{
	int c=0;
	c=x;
	x=y;
	y=c;
}
int main()
{
	int a=10;
	int b=20;
	printf("a=%d,b=%d\n",a,b);
	exchange(a,b);
	printf("a=%d,b=%d\n",a,b);
	return 0;
}
