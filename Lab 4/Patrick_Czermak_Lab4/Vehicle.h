#pragma once

class Vehicle {
	int numWheels, numDoors;

public:
	Vehicle();
	Vehicle(int w);
	Vehicle(int w, int d);

	/* copies of vehicle */
	Vehicle(Vehicle&); /* by reference */
	Vehicle(Vehicle*); /* by pointer */

	~Vehicle();

	void setNumWheels(int w);
	int getNumWheels(void); /* to return numWheels */

	void setNumDoors(int d);
	int getNumDoors(void); /* to return numDoors */

	void printVehicle(void);

};

void CreateVehicle(Vehicle& v, int w = 4, int d = 2);