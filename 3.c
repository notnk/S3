#include<stdio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50],ss[30];
	int ch;
	printf("1.String Concatination.\n2.Deletion of substring.");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("enter the 1st string:\n");
		scanf("%s",s1);
		printf("Enter the 2nd string:\n");
		scanf("%s",s2);
		strcat(s1,s2);
		puts(s1);
	}
	else
	{	
		/*printf("Enter the sub string:");
		gets(ss);
		int k=0,m=0,l;
		l=strlen(ss);
		printf("%d\t",l);
		for(int i=0;s1!='\0';i++)
		{
			if(s1[i]==ss[k])
			{	
				m++;
				k++;
			}
			else	
			{
				k=0;
				m=0;
			}
		}
		if(m==l)
		{
			for(int i=k-m;s1!='\0';i++)	
			{
				s1[i]="0";
			}
		}*/
		int p,l;
		printf("enter the 1st string:\n");
		scanf("%s",s1);
		printf("Enter the postion and the size of the ss:");
		scanf("%d%d",&p,&l);
		int i=0;
		while(s1[i]!='\0')
		{
			s1[p]=s1[l+i];
			i++;
			if(i==l)
				break;
		}
		puts(s1);
	}
}
