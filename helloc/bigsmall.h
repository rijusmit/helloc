#pragma once


#include "stdafx.h"
#include <stdio.h>
#include <conio.h>

void big();
void ibig();

void big()
{
	int x = 10;
	int y = 6;
	int z = 7;
	//let me find out which one is the greatest number

	if (x > y)
	{
		if (x > z)
		{
			printf("\n x is Greatest");
		}
		else
		{
			printf("\n z is Greatest");
		}
	}
	else
	{
		if (y > z)
		{
			printf("\n y is Greatest");
		}
		else
		{
			printf("\n z is Greatest");
		}
	}

}
void ibig()
{
	int x = 0;
	int y = 0;
	int z = 0;

	printf("\nEnter Value Of x:");
	scanf_s("%d", &x);
	printf("\nEnter Value Of y:");
	scanf_s("%d", &y); 
	printf("\nEnter Value Of z:");
	scanf_s("%d", &z);
	//let me find out which one is the greatest number

	if (x > y)
	{
		if (x > z)
		{
			printf("\n x is Greatest");
		}
		else
		{
			printf("\n z is Greatest");
		}
	}
	else
	{
		if (y > z)
		{
			printf("\n y is Greatest");
		}
		else
		{
			printf("\n z is Greatest");
		}
	}
}