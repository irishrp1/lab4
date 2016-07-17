#include<stdio.h>
#include<conio.h>
int fact(int);

int main()
{
	int x,fact;
	
	printf("enter a number :");
	scanf("%d",&x);
	
	fact=factorial(x);	
	
	printf("The factorial of the number %d is %d",x,fact);
}

int factorial(int a)
{
	int b=a-1;
	if(a==0)
	{
		return 1;
	}
	else
	{
		return (a*factorial(b));
	}
}


