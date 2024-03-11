// Test Driver for Program 1B

#include <iostream>
#include "TwoDay.h"
#include "Overnight.h"

using namespace std;

int main()
{
	string name = "Sam Tindol";
	string address = "114 Duck Spring Rd. Toney, AL 35773";
	int ounces = 8;
	float costPerOunce = 5.75;
	float flatFee = 6.00;
	float extraFee = -8.00;

	Overnight OShipping;
	TwoDay TDShipping;
	Package PShipping;
	//Package PShipping(name, address, ounces, costPerOunce);
	//Overnight OShipping(name, address, ounces, costPerOunce, extraFee);
	//TwoDay TDShipping(name, address, ounces, costPerOunce, flatFee);

	OShipping.SetName(name);
	OShipping.SetAddress(address);
	OShipping.SetCostPerOunce(costPerOunce);
	OShipping.SetNumOz(ounces);
	OShipping.SetExtraPerOz(extraFee);

	TDShipping.SetName(name);
	TDShipping.SetAddress(address);
	TDShipping.SetCostPerOunce(costPerOunce);
	TDShipping.SetNumOz(ounces);
	TDShipping.SetTwoDayFee(flatFee);

	PShipping.SetName(name);
	PShipping.SetAddress(address);
	PShipping.SetCostPerOunce(costPerOunce);
	PShipping.SetNumOz(ounces);

	PShipping.PrintInfo("Package", 0.0);
	//OShipping.PrintInfo();
	//TDShipping.PrintInfo();

	system("pause");
	return 0;
}