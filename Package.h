// Package.h this file contains the Package class variables and funcion prototypes
// This file contains the prototypes that will be included in the test driver
// Author: Samuel Tindol
// email: st0135@uah.edu
// For: CS221-02, Spring 2024, Mrs. Delugach
// Using Compiler MVS 2022


#pragma once
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Package
{
// These member variables will store data, and the constants will be used as checks and base values in the .cpp file.
private:
	string name = "";
	string address = "";
	float costPerOunce = 0.0;
	int numOfOunces = 0;
	const float BASECOSTPEROUNCE = 0.45;
	const int BASENUMBEROFOUNCES = 5;
	const string BASENAME = "Undefined";
	const string BASEADDRESS = "Nowhere";

// Prototypes of our functions
public:
	Package();
	~Package();
	Package(string myName, string myAddress, int myNumOfOunces, float myCostPerOunce);

	void GetNameAndAddress(string& myName, string& myAddress);
	void SetName(string myName);
	void SetAddress(string myAddress);
	void SetCostPerOunce(float myCostPerOunce);
	float GetCostPerOz();
	int GetNumOz();
	void SetNumOz(int myNumOfOunces);
	float CalculateTotalCost();

	// The string argument is defaulted to "Package" and extra is defaulted to 0.0 so if the user calls this with no
	// added arguments, these will be used
	void PrintInfo(string method = "Package", float extra = 0.0);

// Protected functions
protected:
	string GetName();
	string GetAddress();

};

