/*
Name:Brillary Samwel
Reg No: PA106/G/28798/25
Description: Finding the volume & surface area of a cylinder
volume = Pi *'radiusN' * height
Surfacearea = 2*Pi*radius*radius + 2* Pi *radius *height
pi =3.142
*/

#include <stdio.h>
#define Pi 3.142

int main () {
	float radius,height,volume,surfacearea;
	
//Enter the value of height and radius
	printf ("Enter height of the cylinder: \n");
	scanf("%f",&height);
	
	printf ("Enter radius of the cylinder: \n");
	scanf ("%f",&radius);
	
//Execute the inputs
	volume =Pi*radius*radius*height;
	surfacearea =2*Pi*radius*radius+2*Pi*radius*height;

//Display outputs
	printf("The volume of the cylinder is %.2f /n", volume);
	printf("The surface area of the cylinder is %.2f /n", surfacearea);
	return 0;
}
	