#include <stdio.h>
#include <stdlib.h>

int function(int a, int b, int n)
{
	scanf("%d",&a);
	n=(a+b)*(a+b);
	return n;
}

int main(int argc, char *argv[]) 
{	
	
	printf("%d", function(a,b,n));//error
	return 0;
}
