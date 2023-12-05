#include<stdio.h>

int main()
{
	int a,b,i,j;
	
	printf("Enter the number :");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			printf("%d",i);
			
		}
		printf("\n");
	}
}
