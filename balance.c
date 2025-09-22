/*
 Name: Brillary Samuel
 Reg No:PA106/G/28798/25
 Description: Program to display bank details
 */
 
 #include <stdio.h>
 int main () {
 	int Height;
 	int IDNumber;
 	float Bankbalance;
 	
 	printf ("Enter your height in metres: \n");
 	scanf ("%f", &Height);
 	printf ("Your Height is %d \n" ,Height);
 	
 	printf("Enter your IDNumber: \n");
 	scanf ("%d",&IDNumber);
 	printf ("Your IDNumber is %d \n",IDNumber);
 	
 	printf ("Enter your Bankbalance: \n");
 	scanf("%f" ,&Bankbalance);
 	printf("Your Bankbalance is ksh.%.2f \n", Bankbalance);
 	
 	return 0;
 }
     