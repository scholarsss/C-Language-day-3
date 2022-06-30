#include<stdio.h>
int leap_year(int x)
{
	if((x%4==0 && x%100!=0)||(x%400==0))
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	int year;
	printf("请输入您要查询的年份\n");
	scanf("%d",&year);
	leap_year(year);
	if(1==leap_year(year))
	{
		printf("%d是闰年\n",year);
	}
	if(-1==leap_year(year))
	{
		printf("%d不是闰年\n",year);
	}
	return 0;
}
