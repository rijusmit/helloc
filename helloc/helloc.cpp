// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include "calc.h"
#include "bigsmall.h"
#include "gradesandmarks.h"

#include "loop.h"




int main()
{
	int z = 0;

	//printf("\nHello World");

	//z = count();
	//printf("%d", z);
	
	//print1to20();
	/*oddnumber();*/
	//evennumber();
	//byfive();
	//byten();
	//big();
	//ibig();
	//grades();

	//commonmultiple();
	//exercise();
	for (int k = 0; k < 10; k++)
	{

		if (k % 2 == 0)
		{

			for (int i = 0, j = 0; i < 20; i++, j++)
			{
				count200(20, 10, i, j);
				Sleep(100); // Sleep three seconds
				system("cls");

			}
		}
		else
		{
			for (int i = 20, j = 20; i >=0; i--, j--)
			{
				count200(20, 10, i, j);
				Sleep(100); // Sleep three seconds
				system("cls");

			}
		}
	}

	_getch();
	return 0;
}





//Next Program is print 1 to 20...


