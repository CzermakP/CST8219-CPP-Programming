#pragma once

#include "Vehicle.h"

class ElectricVehicle : virtual public Vehicle { //
protected: float currentCharge = 0, maximumCharge = 0; 

public:

	ElectricVehicle();
	ElectricVehicle(float maxEnergy, float efficiencyRating);
	virtual ~ElectricVehicle();

	virtual float calculateRange(); 
	virtual float percentEnergyRemaining(); 
	virtual void drive(float km);
};