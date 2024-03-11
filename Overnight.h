// Overnight.h this file contains the Overnight class variables and funcion prototypes
// This file contains the prototypes that will be included in the test driver
// Author: Samuel Tindol
// email: st0135@uah.edu
// For: CS221-02, Spring 2024, Mrs. Delugach
// Using Compiler MVS 2022


#include "Package.h"
#pragma once
class Overnight: public Package
{
// Private member variables including a base constant
private:
	float extraPerOunce = 0.0;
	const float BASEEXTRAPEROUNCE = 1.20;

// Public member functions
public:
	Overnight();
	~Overnight();
	Overnight(string myName, string myAddress, int myNumOfOunces, float myCostPerOunce, float myExtraPerOunce);

	float GetExtraPerOz();
	void SetExtraPerOz(float myExtraPerOz);
	float CalculateTotalCost();
	void PrintInfo();

};

