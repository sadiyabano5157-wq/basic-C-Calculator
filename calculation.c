#include<stdio.h>
int main()
{
	int a,b;
	int choice;
	
	printf("1)addition\n 2)subtraction\n 3)multiplication\n 4)division\n 5)modulus\n");
	printf("Enter a number:\n ");
	scanf("%d",&a);
	
	printf("Enter a number:\n");
	scanf("%d",&b);
	
	printf("Enter a choies:\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Addition is =%d\n",a+b);
	}
	else if(choice==2)
	{
		printf("subtraction is =%d\n",a-b);
	}
	else if(choice==3)
	{
		printf("Multiplication is =%d\n",a*b);
	}
	else if(choice==4)
	{
		if(b!=0)
		
		printf("division is =%.2f\n",(float)a/b);
	    else
	    
	   	printf("division by zero not allowed:\n");
	}
	
	else if(choice==5)
	{
		if(b!=0)
		printf("modulus is =%d\n",a%b);
		else
		printf("modulus by zero not allowed:\n");
	}
	else
	{
		printf("Wrong entry:\n");
	}
	return 0;
}
