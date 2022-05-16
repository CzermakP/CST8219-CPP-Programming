#pragma once
#include "Vehicle.h"
#include "ElectricVehicle.h"
#include "GasolineVehicle.h"


class HybridVehicle : virtual public GasolineVehicle, virtual public ElectricVehicle {
	float gasolineEfficiency = 0, electricEfficiency = 0;
public:

	HybridVehicle();
	HybridVehicle(float maxGas, float gasEff, float maxCharge, float elecEff);
	virtual ~HybridVehicle();


	virtual float calculateRange() override;
	virtual float percentEnergyRemaining() override;
	virtual void drive(float km);
};