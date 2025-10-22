#include<stdio.h>
int main()
{
	int num,original,reversed = 0,remainder;
	printf("Enter a positive integer:");
	scanf("%d",&num);
	if(num<0);
	{
	printf("Please enter a positive integer:");
	scanf("%d",&num);
	if(num<0);
	{
	printf("Please enter a positive integer.\n");
	return 1;
	}
	original = num;
	while(num != 0);
	{
	remainder = num % 10;
	reversed = reversed* 10 + remainder;
	num /=10;
		
	}	
	if(original == reversed){
	printf("%d is a palindrome.\n",original);
	
    } else {
    printf("%d is not a palindrome.\n",original);	
	}
	return 0;
	}
	
}

