/Program 1: Simple Calculator/

 
 #include<stdio.h>
 
 int main()
 {
 	int num1,num2;
 	
 	float result;
 	char op;
 	
 	printf("Enter two integers :");
 	scanf("%d%d", &num1,&num2);
 	
 	printf("Enter the operator \n");
 	printf("+ for addition\n");
 	printf("- for subtraction\n");
 	printf("* for multiplication\n");
 	printf("/ for division\n");
 	printf("%% for modulus\n");	
 	scanf(" %c",&op);				
 	
 	if(op=='+')
 	{
 		result=num1+num2;
 	}
 	else if(op=='-')
 	{
 		result=num1-num2;
 	}
 	else if(op=='*')
 	{
 		result=num1*num2;
 	}
 	else if(op=='/')
 	{
 		if (num2 == 0)
 		{
 			printf("Invalid! Division by zero error... \n");
 			return (-1);
 		}
 		result=num1/num2;
 	}
 	else if(op=='%')
 	{
 		if (num2 == 0)
 		{
 			printf("Invalid! Division by zero error... \n");
 			return (-1);
 		}
 			result=num1%num2;
 	}
 	else
 	{
 		printf("Invalid operator...\n");
 		return 1;
 	}
 	
 	printf("Result = %f\n",result);
 	return 0;
 }
