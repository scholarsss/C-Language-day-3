#include<stdio.h>
int tow_points(int arr[],int a,int sz)
{
	int left=0;
	int right=sz-1;
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr[mid]<a)
		{
			left=mid+1;
		}
		if(arr[mid]>a)
		{
			right=mid-1;
		}
		if(arr[mid]==a)
		{
			return mid;
		}
	}
	if(left>right)
		return -1;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int a=8;
	int b=tow_points (arr,a,sz);
	if(-1==tow_points (arr,a,sz))
	{
		printf("该数组当中没有您要查询的数\n");
	}
	else
	{
		printf("该下标为：%d\n",b);
	}
	return 0;
}
