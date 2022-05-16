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
Vehicle::Vehicle(Vehicle& copy) : Vehicle(copy.numWheels, copy.numDoors) {
	cout << "Address of copy by reference(&) is: " << &copy << endl;
}

/* getting copy of vehicle w and d by pointer */
Vehicle::Vehicle(Vehicle* copy) : Vehicle(*copy) {
	cout << "Address of copy by pointer(*) is: " << copy << endl;
}

void Vehicle::printVehicle() {
	cout << "Vehicle with: "
		 << " Wheels = " << this->numWheels
		 << " Doors = " << this->numDoors << endl;
}

void Vehicle::setNumWheels(int w) { 
	this->numWheels = w; 
}
//int Vehicle::getNumWheels(void) { return numWheels; } used LAB 4

void Vehicle::setNumDoors(int d) { 
	this->numDoors = d; 
}
//int Vehicle::getNumDoors(void) { return numDoors; } used LAB 4

/* 2 */
Vehicle& Vehicle::operator=(Vehicle& other) {
	this->numWheels = other.numWheels;
	this->numDoors = other.numDoors;
	return other;
}

/* 3 */
bool Vehicle::operator==(const Vehicle& other) {
	if ((this->numWheels == other.numWheels) && (this->numDoors == other.numDoors)) {
		return true;
	}
	else {
		return false;
	}
}

/* 4 */
bool Vehicle::operator!=(const Vehicle& other) {
	return !(this->operator==(other));
}

/* 5-a */
Vehicle& Vehicle::operator++() {
	this->numWheels = this->numWheels + 1;
	this->numDoors = this->numDoors + 1;
	return *this;
}

/* 5-b */
Vehicle& Vehicle::operator++(int i) {
	Vehicle* tempVeh = new Vehicle(this);
	this->numWheels = this->numWheels + 1;
	this->numDoors = this->numDoors + 1;
	return *tempVeh;
}

/* 5-c */
Vehicle& Vehicle::operator--() {
	this->numWheels = this->numWheels - 1;
	this->numDoors = this->numDoors - 1;
	return *this;
}

/* 5-d */
Vehicle& Vehicle::operator--(int i) {
	Vehicle* tempVeh = new Vehicle(this);
	this->numWheels = this->numWheels - 1;
	this->numDoors = this->numDoors - 1;
	return *tempVeh;
}

/* 6 */
ostream& operator<<(ostream& display, const Vehicle& v) {
	display << "Number of wheels = " << v.numWheels << endl;
	display << "Number of doors = " << v.numDoors << endl;
	return display;
}
