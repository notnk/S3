#include<stdio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50],ss[30],str[20];
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
		char text[200],str[20], new_text[200]; 
      		int i=0,j=0,found=0,k,n=0,c=0;  
      		printf("\n Enter the main text: "); 
      		scanf("%s",text); 
      		printf("\n Enter the string to be deleted: "); 
      		scanf("%s",str);  
   		while(text[i]!='\0') 
   		{
   			j=0,found=0,k=i; 
             		while (text[k]==str[j]&&str[j]!='\0') 
              		{ 
              			k++; 
              			j++; 
             		} 
                 	if(str[j]=='\0') 
                 	{ 
                        	c=k; 
                 	} 
                        new_text[n]=text[c]; 
                        i++; 
                        c++; 
                        n++; 
 	  	} 
		str[n]='\0'; 
                printf("\n The new string is: "); 
                puts(new_text); 
	}
}
