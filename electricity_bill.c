/*
Name:Brillary Samuel
Reg No:PA106/G/28798/25
Description:Program to display total electricity bill
*/

#include<stdio.h>

//Function to calculate electricity bill
 
   float calculateElectricBill(int units){
	   float bill=0;
	   if(units<=100){
		   bill=units*10;
	   }
	   else if(units<=200){
		   bill=(100*10)+(units-200)*15;
	   } else{
		   bill=(100*10)+(100*15)+(units-200)*20;
	   }
	   return bill;
   }
   
int main(){
	int units;
	float totalBill;
		
	printf("Enter number of units consumed:");
	scanf("%d",&units);
	
	 totalBill=calculateElectricBill(units);
	printf("Total electricitry bill Ksh. %.2f \n", totalBill);
	
return 0;
}