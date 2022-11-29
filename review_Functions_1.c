#include <stdio.h>
#include <stdlib.h>

int function(int a, int b)
{
	scanf("%d",&a);
	scanf("%d",&b);
	return a*b+(a+b);//
}

int main(int argc, char *argv[]) 
{	

	printf("%d", function(3,4));
	return 0;
}
