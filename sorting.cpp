#include<stdio.h>
int main(){
	int num,sum = 0,digit;
	printf("Enter a 5-digit number:");
	scanf("%D",&num);
	if(num<10000||num>99999){
	printf("Error: Please enter a valid 5-digit number.\n");
	return 1;
	}
	
	for (int i= 0;i<5;i++){
	digit = num % 10;
	sum += digit;
	num/= 10;
		
	}
	printf("sum of digits:%d\n",sum);
	return 0;
}
