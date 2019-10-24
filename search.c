#include<stdio.h>
void lsearch(int a[],int n,int k)
{
	int f=0;
	for(int i=0;i<n;i++)
		if(k==a[i])
		{
			printf("Found at postion %d",i+1);
			f=1;
		}
	if(f==0)
		printf("Element not found!!");
}
void bsearch(int a[],int n,int k)
{
	int f=0,l=0,mid,u=n-1;
	mid=(l+u)/2;
	do
	{
		if(k==a[mid])
		{
			printf("Found at postion %d",mid);
			f=1;
		}
		else if(k>mid)
			l=mid+1;
		else
			u=mid-1;
	}while(l>=u);
	if(f==0)
		printf("Element not found!!");
}
void main()
{
	int c,a[100],n,k;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements of the array");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to be searched:");
	scanf("%d",&k);
	printf("\n1.Linear Search\n2.Binary Search(Should be sorted array)\nEnter your choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:	lsearch(a,n,k);
			break;
		case 2:	bsearch(a,n,k);
	}
}
