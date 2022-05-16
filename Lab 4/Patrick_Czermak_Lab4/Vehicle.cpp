#include<iostream>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle() :Vehicle(4) {
	cout << "In constructor with 0 parameters" << endl;
}


Vehicle::Vehicle(int w) :Vehicle(w, 4) {
	cout << "In constructor with 1 parameter. Wheels = " << w << endl;
}

Vehicle::Vehicle(int w, int d) {
	cout << "In constructor with 2 parameters. Wheels = " << w << " Doors = " << d << endl;

	setNumWheels(w);
	setNumDoors(d);
}

Vehicle::~Vehicle() {
	cout << "In destructor" << endl;
}

/* getting copy of vehicle w and d by reference  */
Vehicle::Vehicle(Vehicle& copy) : Vehicle(copy.getNumWheels(), copy.getNumDoors()) {
	cout << "Address of copy by reference(&) is: " << &copy << endl;
}

/* getting copy of vehicle w and d by pointer */
Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy) {
	cout << "Address of copy by pointer(*) is: " << copy << endl;
}

void Vehicle::printVehicle() {
	cout << "Vehicle with: "
		<< " Wheels = " << numWheels
		<< " Doors = " << numDoors << endl;
}

void Vehicle::setNumWheels(int w) { numWheels = w; }
int Vehicle::getNumWheels(void) { return numWheels; } 

void Vehicle::setNumDoors(int d) { numDoors = d; }
int Vehicle::getNumDoors(void) { return numDoors; }