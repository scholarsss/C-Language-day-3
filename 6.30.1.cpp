#include<stdio.h>
#include<math.h>
void sushu(int x)
{
	int b=sqrt(x);
	for(int i=2;i<=b;i++)
	{
		if(x%i==0)
		{
			printf("%d不为素数\n",x);
			break;
		}
		else if(i==b)
		{
			printf("%d为素数\n",x);
			break;
		}
	}
}
int main()
{
	int a;
	int *pa=&a;
	printf("请输入一个正整数\n");
	scanf("%d",&a);
	sushu(*pa);
	return 0;
}
