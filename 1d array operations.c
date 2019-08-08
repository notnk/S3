#include<stdio.h>
void main()
{
	int i,j,a[10],t,r1,r2,n=3;
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Elements are:\n");
	for( i=0;i<n;i++)
		printf("%d\t",a[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	printf("\nThe sorted array is:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\nEnter the elemented to be replaced and which is to be replaced:");
	scanf("%d%d",&r1,&r2);
	for(i=0;i<n;i++)
		if(a[i]==r1)
			a[i]=r2;
	printf("\nModifed array is:\n");
	for( i=0;i<n;i++)
		printf("%d\t",a[i]);
}
