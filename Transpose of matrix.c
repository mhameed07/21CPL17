/* Program 9: Develop a program to display transpose of a matrix.
 */
 
 
#include<stdio.h>

int main()
{
	int a[10][10];
	int m,n,i,j;
	
	// Input the order of Matrix A - m x n
	printf("Enter the order of matrix A :");
	scanf("%d%d",&m,&n);
	
	
	// Input the elements into Matrix A
	printf("Enter %d elements into matrix A : ", m*n);
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++)
		{	scanf("%d",&a[i][j]);
		}
	}
	
	// Display matrix A
	
	printf("\nThe  matrix A is ---\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}	
	printf("\n");
	
	// Display Transpose of Matrix A		
	
	printf("\nThe Transpose of matrix A is ---\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}