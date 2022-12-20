#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,j,a,n;
	//scanf("%d",&n);
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				a++;
			}
		}
		if(a!=2)
		{
			n=n+i;
		}
		a=0;
		
	}
	printf("%d",n);
	return 0;
}
