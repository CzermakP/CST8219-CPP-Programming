#pragma once
#include "Vehicle.h"

class GasolineVehicle : virtual public Vehicle {
protected: float currentGasoline = 0, maximumGasoline = 0;

public:
	GasolineVehicle();
	GasolineVehicle(float maxEnergy, float efficiencyRating);

	virtual ~GasolineVehicle();

	virtual float calculateRange();
	virtual float percentEnergyRemaining();
	virtual void drive(float km);
};