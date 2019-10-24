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
	int i,first, last, middle;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(a [middle] < k)
		{
			first = middle + 1;

		}
		else if(a[middle] == k)
		{
			printf("%d found at location %d\n", k, middle+1);
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		printf("Not found! %d is not present in the list.",k);
	}
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
