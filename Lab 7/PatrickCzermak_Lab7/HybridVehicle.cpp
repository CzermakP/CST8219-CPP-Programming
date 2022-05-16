//#include<iostream>
//#include "HybridVehicle.h"
//
//
//HybridVehicle::HybridVehicle() {};
//
//HybridVehicle::HybridVehicle(float maxGas, float gasEff, float maxCharge, float elecEff)
//{
//	maximumGasoline = maxGas;
//	gasolineEfficiency = gasEff;
//	currentGasoline = maxGas;
//
//	maximumCharge = maxCharge;
//	electricEfficiency = elecEff;
//	currentCharge = maxCharge;
//};
//
//HybridVehicle::~HybridVehicle()
//{
//	cout << "In HybridVehicle Destructor" << endl;
//}
//
//float HybridVehicle::calculateRange()
//{
//	float gasRange, electricRange;
//
//	gasRange = currentGasoline * 100 / gasolineEfficiency;
//	electricRange = currentCharge * 100 / electricEfficiency;
//
//	return gasRange + electricRange;
//
//};
//
//float HybridVehicle::percentEnergyRemaining()
//{
//	float gasRem, elecRem;
//
//	gasRem = GasolineVehicle::percentEnergyRemaining(); // same as:  gasRem = currentGasoline / maximumGasoline * 100;
//	elecRem = ElectricVehicle::percentEnergyRemaining(); // same as:  elecRem = currentCharge / maximumCharge * 100;
//
//	return (gasRem + elecRem) / 2;
//};
//
//
//void HybridVehicle::drive(float km)
//{
//	currentCharge -= (km / 100) * electricEfficiency;
//
//	if (currentCharge < 0) {
//		currentCharge = 0;
//	}
//
//	currentGasoline -= (km / 100) * gasolineEfficiency;
//
//	if (currentGasoline < 0) {
//		currentGasoline = 0;
//		printf("Your car is out of energy!");
//	}
//
//};

