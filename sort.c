#include<stdlib.h>
#include<stdio.h>
void bubble(int a[],int n)
{	
	int temp;
	for(int i=0;i<n;i++)
		for(int j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	printf("Array after sorting.\n\n");
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
}
void selec(int a[],int n)
{
	int temp;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	printf("Array after sorting.\n\n");
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
}
void insertion(int a[],int n)
{
	int temp;
	for(int i=2;i<n;i++)
		insert(a[i],a,i-1);
}
void insert(int e,int a[],int i)
{
	a[0]=e;
	while(e<a[i])
	{
		a[i+1]=a[i];
		i--;
	}
	a[i+1]=e;
}
void quick(int a[],int l,int h)
{
	if(l<h)
	{
		int i,j,k,temp;
		i=l;
		j=h+1;
		k=a[l];
		do
		{
			do
			{	
				i++;
			}while(a[i]<=k);
			do
			{
				j--;
			}while(a[j]>=k);
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}while(i<=j);
		quick(a,l,j-1);
		quick(a,j+1,h);
	}
}	
void mergesort(int a,int l,int u)	
{
	int mid;
	if(l<u)		
	{
		mid=(l+u)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,u);
		merge(a,l,mid,u);
	}
}
void merge(int a[],int l,int mid,int u)
{
	int i,j,k,c[100],m;
	i=l;
	j=mid+1;
	k=0;
	while(i<=mid&&j<=u)
	{
		if(a[i]<=a[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=a[j];
			j++;
			k++;
		}
	}
	if(i>mid&&j<=u)
	{
		for(m=j;m<=u;m++)
		{
			c[k]=a[m];
			k++;
		}
	}
	else if(i<=mid && j>u)
	{
		for(m=i;m<=mid;m++)
		{
			c[k]=a[m];
			k++;
		}
	}
	for(m=0;m<k;m++)
	{
		a[m]=c[m];
	}
}
void main()
{
	int a[100],n,ch;
	printf("Enter the size:");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	while(13312)
	{
		printf("1.Bubble\n2.Select\n3.Insertion\n4.Reccusive Quick\n5.reccusive Merge\n6.Heap \n7.Exit\nEnter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	bubble(a,n);
				break;
			case 2:	selec(a,n);
				break;
			case 3:	insertion(a,n);
				printf("Array after sorting.\n\n");
				for(int i=0;i<n;i++)
					printf("%d\n",a[i]);
				break;
			case 4:	quick(a,1,n);
				printf("Array after sorting.\n\n");
				for(int i=0;i<n;i++)
					printf("%d\n",a[i]);
				break;
			case 5:	mergesort(a,0,n);
				printf("Array after sorting.\n\n");
				for(int i=0;i<n;i++)
					printf("%d\n",a[i]);
				break;
			case 7: exit(0);
		}
	}
}
