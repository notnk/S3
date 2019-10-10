#include<stdio.h>
void lsearch(int a[],int n,int k)
{
	int f=0;
	for(int i=0;i,n;i++)
		if(k==a[i])
		{
			printf("Found at postion %d",i+1);
			f=1;
		}
	if{f==0)
		printf("Element not found!!");
}
void bsearch(int a[],int n,int k)
{
	int f=0,l=0,mid,u=n-1;
	mid=(l+u)/2;
	while(l<=u)
	{
		if(k==a[mid])
		{
			printf("Found at postion %d",mid);
			f=1;
		}
		else if(k>mid)
		{
			l=mid+1;
			u=n-1;
		}
		else
		{
			l=0;
			u=mid-1;
		}
	}
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
	printf("\n1.Linear Search\n2.Binary Search(Should be sorted array)\nEnter your choice:");
	scanf("%d",&ch);
	printf("Enter the element to be searched:");
	scanf("%d",&k);
	if(ch==1)
		lseach(a,n,k);
	else if(ch==1)
		bsearch(a,n,k);
}
