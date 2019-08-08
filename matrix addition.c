#include<stdio.h>
void main()
{
	int a[3][3],b[3][3];
	printf("Enter the elements of 1st matrix:");
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	printf("Enter the elements of 2nd matrix:");
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	printf("Array after addition is :\n");
	for(int i=0;i<3;i++)
	{	printf("\n");
		for(int j=0;j<3;j++)
			printf("%d ",a[i][j]+b[i][j]);
	}
}
