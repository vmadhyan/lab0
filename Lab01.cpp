﻿// Lab01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//Venkat Madhyanam
//COSC 2030
//Lab1
//2/11/18

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream infile;
	string file;
	int count(0);
	double a = 0;
	double b = 0;
	double c = 0;
	double d = 0;

	cout << "Please enter a file name -  ";

	getline(cin, file);

	infile.open(file);
	if (infile.fail())
	{
		do
		{
			cout << "We are unable to open the file" << endl;
			cout << "Please enter a file name - ";
			getline(cin, file);
			infile.open(file);
		} while ((!infile.fail()));
	}

	while (!infile.eof())
	{

		if (count == 0)
		{
			infile >> a;

			b = a;
		}
		else if (count == 1)
		{
			infile >> a;

			c = d;

			d = b;
		}
		else if (count > 1)
		{
			c = d;

			infile >> d;
		}

		count++;
	}
	cout << "The number of elements in your file are: " << count << endl;

	cout << "Your first two numbers are " << b << " " << a << endl;

	cout << "Your last two numbers are " << c << " " << d << endl;

	infile.close();

	return 0;
}
