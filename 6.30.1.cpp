#include<stdio.h>
#include<math.h>
void sushu(int x)
{
	int b=sqrt(x);
	for(int i=2;i<=b;i++)
	{
		if(x%i==0)
		{
			printf("%d��Ϊ����\n",x);
			break;
		}
		else if(i==b)
		{
			printf("%dΪ����\n",x);
			break;
		}
	}
}
int main()
{
	int a;
	int *pa=&a;
	printf("������һ��������\n");
	scanf("%d",&a);
	sushu(*pa);
	return 0;
}
