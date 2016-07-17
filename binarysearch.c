#include<stdio.h>
#define max 100
int binarysearch(int,int);
int x;
char a[max];

int main()
{
	int n,i,j;
	
	printf("number of elements:\n");
	scanf("%d",&n);
	printf("the elements arranged in array:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("searching number?:\n");
	scanf("%d",&x);
	
	j=binarysearch(0,n);
	
	if(j==-1)
	{
		printf("ERROR!!");
	}
	else
	{
		printf("The num %d is found in the array.\n",a[j]);
	}
}

int binarysearch(int low,int high)
{
	int mid;
	mid=(low+high)/2;
		
	if(low>high)
	{
		return (-1);
	}
	else if(x==a[mid])
	{
		return (mid); 
	}
	else if(x<a[mid])
	{
		binarysearch(low,mid-1);
	}
	else if(x>a[mid])
	{
		binarysearch(mid+1,high);
	}
}


