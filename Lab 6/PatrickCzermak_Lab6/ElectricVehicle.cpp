#include<iostream>
#include "ElectricVehicle.h"


ElectricVehicle::ElectricVehicle() {};
ElectricVehicle::ElectricVehicle(float maxEnergy, float engEff)
{
	//set to full charge/energy
	currentCharge = maxEnergy;
	engineEfficiency = engEff;

	maximumCharge = currentCharge;
};


ElectricVehicle::~ElectricVehicle()
{
	cout << "In ElectricVehicle Destructor" << endl;
}

float ElectricVehicle::calculateRange()
{
	float currentRange = 0;

	currentRange = (currentCharge * 100) / engineEfficiency;

	return currentRange;
};

float ElectricVehicle::percentEnergyRemaining()
{
	return (currentCharge / maximumCharge) * 100.0f;
};

void ElectricVehicle::drive(float km)
{
	currentCharge -= (km / 100) * engineEfficiency;
};

