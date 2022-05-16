#include<iostream>
#include "GasolineVehicle.h"


GasolineVehicle::GasolineVehicle()
{};

GasolineVehicle::GasolineVehicle(float maxEnergy, float gasEff)
{
	//set to full gas/energy
	currentGasoline = maxEnergy;
	engineEfficiency = gasEff;

	maximumGasoline = currentGasoline;
};

GasolineVehicle::~GasolineVehicle()
{
	cout << "In GasolineVehicle Destructor" << endl;
}

float GasolineVehicle::calculateRange() {
	float currentRange = 0;

	currentRange = (currentGasoline * 100) / engineEfficiency;

	return currentRange;
};

float GasolineVehicle::percentEnergyRemaining()
{
	return (currentGasoline / maximumGasoline) * 100.0f;
};

void GasolineVehicle::drive(float km)
{
	currentGasoline -= (km / 100) * engineEfficiency;
};