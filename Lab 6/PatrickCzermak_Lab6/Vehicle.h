#pragma once
//#include <iostream>

using namespace std;

class Vehicle {
protected:
	int numWheels, numDoors;
	float engineEfficiency;

public:
	Vehicle();
	Vehicle(int w);
	Vehicle(int w, int d);

	/* copies of vehicle */
	Vehicle(Vehicle&); /* by reference */
	Vehicle(Vehicle*); /* by pointer */

	virtual ~Vehicle(); /* destructor */

	void setNumWheels(int w);
	int getNumWheels(void) const; /* to return numWheels */ //used LAB 4
	void setNumDoors(int d);
	int getNumDoors(void) const; /* to return numDoors */ //used LAB 4

	void printVehicle(void);

	virtual float calculateRange() = 0;
	virtual float percentEnergyRemaining() = 0;
	virtual void drive(float km) = 0;

	//Vehicle& operator=(Vehicle&); /* 2 */
	//bool operator==(const Vehicle&); /* 3 */
	//bool operator!=(const Vehicle&); /* 4 */
	//Vehicle& operator++(); /* 5-a */
	//Vehicle& operator++(int i); /* 5-b */
	//Vehicle& operator--(); /* 5-c */
	//Vehicle& operator--(int i); /* 5-d */

	//friend ostream& operator<<(ostream&, const Vehicle&); /* 6 */

};

void CreateVehicle(Vehicle& v, int w = 4, int d = 2); 