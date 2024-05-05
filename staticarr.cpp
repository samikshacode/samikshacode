#include<stdio.h>
int main()
{
	int a[100];
	int i,j,pos,k,sum=0,n;
	printf("Enter the no of elements in an array=");
	scanf("%d",&n);
	printf("Enter the %d elements in the array=",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position:");
	scanf("%d",&pos);
	printf("Enter the element to be insert:");
	scanf("%d",&k);
	
	for(i=n;i>pos;i--)
	{
	    a[i]=a[i-1];
	}
	a[pos]=k;
	for(i=0;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	printf("Enter the position:");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("after deletion array becomes:");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	printf("Sum of arrey elements=%d",sum);
}
