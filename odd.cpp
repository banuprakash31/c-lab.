#include<stdio.h>
int main(){
	int n,i;
	//Prompt the user for input
	printf("enter a positive integer:");
	scanf("%d",&n);
	
	//Validate input
	if(n<=0){
    printf("please enter a positive integer greate then 0.\n");
    return 1;
	}
	
	printf("\nOdd number from 1 to %d are:\n");
	
	//Loop to print odd numbers
	for(i=1;i<=n;i+=2){
	printf("%d",i);
	
 }
printf("\n");
return 0;
}
