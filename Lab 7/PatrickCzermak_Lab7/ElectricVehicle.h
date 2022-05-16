#pragma once

#include "Vehicle.h"

template<class T>
class ElectricVehicle : public Vehicle<T> { 
protected: T currentCharge = 0.0, maximumCharge = 0.0, electricEfficiency = 0.0;

public:
	inline ElectricVehicle() {

	}
	inline ElectricVehicle(T maxEnergy, T efficiencyRating) {
		currentCharge = maxEnergy;
		electricEfficiency = efficiencyRating;

		maximumCharge = currentCharge;
	}
	inline ~ElectricVehicle() {
		cout << "In ElectricVehicle Destructor" << endl;
	}

	inline T calculateRange() {
		float currentRange = 0.0;

		currentRange = (currentCharge * 100) / electricEfficiency;

		return currentRange;
	}
	inline T percentEnergyRemaining() {
		float percentage = (float)currentCharge / (float)maximumCharge * 100.0f;
		return percentage;
		//return ((float)currentCharge / (float)maximumCharge) * 100.0f;
	}
	inline void drive(T km) {
		currentCharge -= ((float)km / 100) * electricEfficiency;
	}
};