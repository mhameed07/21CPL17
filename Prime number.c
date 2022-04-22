/* Program 12: Implement using functions to check whether the given number is prime in a given range.
 */
 
#include<stdio.h>

// Declare the prototype of the user defined function
int isprime(int);

int main()
{
	int num,result,i;
	
	// Accept the number
	printf("Enter a natural number greater than one :");
	scanf("%d",&num);

	// Call the function isprime() to check whether the given number is prime
	for(i=0; i<=num; i++)
	{	result = isprime(i);
	
		if(result == 1) // one means true
		{
			printf(" %d\n",i);
		}
	}
	return 0;
}   // End of main() function

// Definition of isprime() function starts 
int isprime(int n)
{
	int i;
	if (n<=1)
	{
		return 0;
	}
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}  // End of definition of isprime() function
