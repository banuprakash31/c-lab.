 #include<stdio.h>
 int main()
 {
 	int n,i,j;
 	
 	//get number of rows from user
 	printf("enter the number of rows(n>0):");
 	scanf("%d",&n);
 	
 	//validate input
 	if(n<=0)
 	{
 		printf("please enter a positive integer greater then 0.\n");
 		return 1;
	 }
	 
	 //generate the pattern
	 for(i=1;i<=n;i++){
	 for(j=1;j<=i;j++){
	 	printf("$");
	 }	
	 printf("\n");
	 
	 }
	 
	 return 0;
     }


