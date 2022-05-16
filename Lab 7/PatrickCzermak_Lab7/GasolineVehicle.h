#pragma once
#include "Vehicle.h"

template<class T>
class GasolineVehicle : public Vehicle<T> {
protected: T currentGasoline = 0, maximumGasoline = 0, gasolineEfficiency = 0;

public:
	inline GasolineVehicle() {

	}
	inline GasolineVehicle(T maxEnergy, T efficiencyRating) {
		//set to full gas/energy
		currentGasoline = maxEnergy;
		gasolineEfficiency = efficiencyRating;

		maximumGasoline = currentGasoline;
	}
	inline ~GasolineVehicle() {
		cout << "In GasolineVehicle Destructor" << endl;
	}
	inline T calculateRange() {
		float currentRange = 0;

		currentRange = (currentGasoline * 100) / gasolineEfficiency;

		return currentRange;
	}
	inline T percentEnergyRemaining() {
		return (currentGasoline / maximumGasoline) * 100.0f;
	}
	inline void drive(T km) {
		currentGasoline -= (km / 100) * gasolineEfficiency;
	}
};