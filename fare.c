/*
Name:Brillary Samuel
Reg No:PA106/G/28798/25
Description:Program to display total fare
*/

#include <stdio.h>

//Function to calculate the total fare

    float calculate_fare(float distance)
	{
		float fare=distance*50;
		 
	return fare;	 
	}
	
	
int main(){
	float distance=10;
	float total_fare=calculate_fare(distance);
	printf("total fare %.2f km is Ksh %.2f \n", distance,total_fare);
	
return 0;
}