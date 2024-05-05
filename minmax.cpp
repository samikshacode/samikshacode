#include<stdio.h>
int MaxMin(int i,int j,int min,int max,int a[])
{
	int min1,max1;
	if(i==j)
	{
		max=min=a[i];
	}
	else if(i==j-1)
	{
		if(a[i]<a[j])
		{
			max=a[j];
			min=a[i];
		}
		else
		{
			max=a[i];
			min=a[j];
		}
	}
	else{
		int mid=(i+j)/2;
		
		MaxMin(i,mid,max,min,a);
		MaxMin(mid+1,j,max1,min1,a);
		if(max<max1){
			max=max1;
		}
		if(min>min1)
		{
			min=min1;
		}	
	}
}
int main()
{
  int arr[50];
  int x,y,n;
  printf("Enter the number of elements in an array:");
  scanf("%d",&n);
  printf("Enter the array elements: ");
  for(int i=0;i<n;i++)
  {
  	scanf("%d",&arr[i]);
  }
  MaxMin(1,n,y,x,arr);
  printf("Max=%d\nMin=%d",x,y);
  
  
}
