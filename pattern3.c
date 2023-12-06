#include<stdio.h>

int main()
{
	int a,b,i,j;
	
	printf("Enter the number :");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(j=a;i<=j;j--)
		{
			printf("%d",j);
			
		}
		printf("\n");
	}
}
