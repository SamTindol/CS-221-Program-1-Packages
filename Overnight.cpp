// Overnight.cpp this file contains the Overnight class functions
// This file contains the public functions from the Overnight class
// Author: Samuel Tindol
// email: st0135@uah.edu
// For: CS221-02, Spring 2024, Mrs. Delugach
// Using Compiler MVS 2022

#include "Overnight.h"

// This constructor will set the extraPerOunce variable equal to the base constant value. It will also display a welcome message
Overnight::Overnight()
{
	extraPerOunce = BASEEXTRAPEROUNCE;

	cout << "\nReady2Go Shipping by Sam Tindol is here to give you Overnight Shipping!" << endl << endl;
}

// This destructor will display a parting message
Overnight::~Overnight()
{
	cout << "\nLooks like you won't be getting your Overnight Shipping. What a shame" << endl << endl;
}

// This constructor will accet five arguments and set each member variable equal to its respective argument
Overnight::Overnight(string myName, string myAddress, int myNumOfOunces, float myCostPerOunce, float myExtraPerOunce)
{
	SetName(myName);
	SetAddress(myAddress);
	SetNumOz(myNumOfOunces);
	SetCostPerOunce(myCostPerOunce);

	extraPerOunce = abs(myExtraPerOunce);

	if (extraPerOunce == 0)
	{
		extraPerOunce = BASEEXTRAPEROUNCE;
	}
	
	cout << "\nReady2Go Shipping by Sam Tindol is here to give you Overnight Shipping!" << endl << endl;
}

// This function will return the extraPerOunce variable value
float Overnight::GetExtraPerOz()
{
	return extraPerOunce;
}

// This function will set the extraPerOunce variable equal to the absolute value of the argument. If it is equal to 0,
// it will be defaulted to the base constant variable
void Overnight::SetExtraPerOz(float myExtraPerOz)
{
	extraPerOunce = abs(myExtraPerOz);

	if (extraPerOunce == 0)
	{
		extraPerOunce = BASEEXTRAPEROUNCE;
	}
}

// This function returns the total cost.
float Overnight::CalculateTotalCost()
{
	return Package::CalculateTotalCost() + (GetNumOz() + GetCostPerOz());
}

// This function prints the info by calling the Package PrintInfo() function.
void Overnight::PrintInfo()
{
	Package::PrintInfo("Overnight", GetNumOz() * GetExtraPerOz());
}