// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

int count();
void print1to20();
void oddnumber();
void evennumber();
void byfive();


int main()
{
	int z = 0;
	printf("\nHello World");

	//z = count();
	//printf("%d", z);
	
	//print1to20();
	/*oddnumber();*/
	//evennumber();
	byfive();
	_getch();
	return 0;
}

int count()
{
	int x = 9;
	int y = 10;

	int z = x + y;
	return z;
}

//arithmatic  + - * /  %  ^
//increament operator ++ -- meaning i= i+1; i = i-1
//compare operator > < >= <= ! != ==   

//conditional operator 


void print1to20()
{
	for (int i = 0; i <= 20; i++ )
	{
		printf("\n%d", i);		
	}
}

void oddnumber()
{
	int quotient;
	int original;
	for (int i = 0; i <= 20; i++)
	{
		quotient = i / 2;
		original = quotient * 2;

		if (original != i)
		{
			printf("\nOdd = %d", i);
			
		}
	}
}

void evennumber()
{
	int y = 2;
	
	for (int u = 0; u <= 100; u++)

	{
		if (u % y == 0)
		{
			printf("\nEven=%d", u);

		}

	}

}
void byfive()
{
	int d;
	d = 5;

	for (int h = 0; h <= 100; h++)
	{
		if (h % d == 0)
		{
			printf("\nmultiple of 5 =%d", h);
		}

	}


}




//Next Program is print 1 to 20...


