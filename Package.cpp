// Package.cpp this file contains the Package class functions
// This file contains the public functions from the Package class
// Author: Samuel Tindol
// email: st0135@uah.edu
// For: CS221-02, Spring 2024, Mrs. Delugach
// Using Compiler MVS 2022


#include "Package.h"

// This is our empty constructor that will set all of the data equal to the default values
Package::Package()
{
	name = BASENAME;
	address = BASEADDRESS;
	numOfOunces =  BASENUMBEROFOUNCES;
	costPerOunce = BASECOSTPEROUNCE;

	cout << "\nRedy2Go Shipping from Sam Tindol ready to get your package on the way!" << endl << endl;
}

// This is our destrcutor that will display a departing message.
Package::~Package()
{
	cout << "\nLooks like you won't be getting your shipping. What a shame." << endl << endl;
}

// This is our consrtructor with arguments that will set the member variables equal to the argument values
Package::Package(string myName, string myAddress, int myNumOfOunces, float myCostPerOunce)
{
	name = myName;
	address = myAddress;
	numOfOunces = myNumOfOunces;
	costPerOunce = abs(myCostPerOunce);

	if (numOfOunces < BASENUMBEROFOUNCES)
	{
		numOfOunces = BASENUMBEROFOUNCES;
	}

	if (costPerOunce == 0)
	{
		costPerOunce = BASECOSTPEROUNCE;
	}

	cout << "\nRedy2Go Shipping from Sam Tindol ready to get your package on the way!" << endl << endl;
}

// This function will call by reference the two arguments and set them equal to what is inside the name and address
// member variables
void Package::GetNameAndAddress(string& myName, string& myAddress)
{
	myName = name;
	myAddress = address;
}

// THis function will set name equal to the string argument
void Package::SetName(string myName)
{
	name = myName;
}

// This function will set address equal to the string argument.
void Package::SetAddress(string myAddress)
{
	address = myAddress;
}

// This function will set costPerOunce equal to the absolute value of the float argument. If it is equal to 0, it will
// be set to the constant default value.
void Package::SetCostPerOunce(float myCostPerOunce) 
{
	costPerOunce = abs(myCostPerOunce);

	if (costPerOunce == 0)
	{
		costPerOunce = BASECOSTPEROUNCE;
	}
}

// This function retunrs the value of costPerOunce
float Package::GetCostPerOz()
{
	return costPerOunce;
}

// This function returns the value of numOfOunces
int Package::GetNumOz()
{
	return numOfOunces;
}

// This function sets numOfOunces equal to the integer argument. If the number is less than the base constant, the variable
// is then set equal to the base constant
void Package::SetNumOz(int myNumOfOunces)
{
	numOfOunces = myNumOfOunces;

	if (numOfOunces < BASENUMBEROFOUNCES)
	{
		numOfOunces = BASENUMBEROFOUNCES;
	}
}

// This function returns the total cost of the data from this class
float Package::CalculateTotalCost()
{
	return (numOfOunces * costPerOunce);
}

// This function will print all of our information to the screen. It will accept two arguments being the method of 
// delivery and the extra money. These will be used when this is called in the inherited classes.
void Package::PrintInfo(string method, float extra)
{
	cout << fixed << left;
	cout << setw(20) << "Ships To:" << name << endl;
	cout << setw(20) << " " << address << endl;
	cout << setw(20) << "Method:" << method << endl;
	cout << setw(20) << "Weight:" << numOfOunces << endl;
	cout << setprecision(2) << setw(20) << "Total Cost:" << CalculateTotalCost() + extra << endl << endl;
}

// This function returns the contents of the name variable
string Package::GetName()
{
	return name;
}

// THis function returns the cotents of the address variable
string Package::GetAddress()
{
	return address;
}
