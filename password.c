/*
Name:Brillary Samuel
Reg No:PA106/G/28798/25
Desription:Program to display password
*/

#include <stdio.h>

int main () {
	int password = 1234;
	int input;
	
	do {
		printf ("Enter password: ");
		scanf ("%d", &input);
		
		
		if (input != password) {
			printf ("Incorrect password.Try again. \n");
		}
	}while (input != password);
	
	printf ("Access Granted \n");
	
	return 0;
}