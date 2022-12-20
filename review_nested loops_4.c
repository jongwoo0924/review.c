#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d : ",i);
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				printf(" %d",j);
			}
		}
		printf("\n");
	}
	return 0;
}
