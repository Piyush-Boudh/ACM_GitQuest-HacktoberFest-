#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the length of row : ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		int c=i;
		for(int j=i;j<i+i;j++)
		{	
			if(i+i>=n+1)
			{
				printf("%d",c); c++;
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}

