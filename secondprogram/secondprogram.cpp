// secondprogram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	float first_number, second_number,result;
	
	
	
	printf("\nPlease Enter A Number");
	scanf_s("%f", &first_number);
	printf("\nPlease Enter Another Number");
	scanf_s("%f", &second_number);
	
	result = first_number + second_number;
	
	printf("\nYour Result Is %f\n", result);
	_getch();

	

}

