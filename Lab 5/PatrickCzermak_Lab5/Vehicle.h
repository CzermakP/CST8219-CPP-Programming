#pragma once
#include <iostream>

using namespace std;

class Vehicle {
	int numWheels, numDoors;

public:
	Vehicle();
	Vehicle(int w);
	Vehicle(int w, int d);

	/* copies of vehicle */
	Vehicle(Vehicle&); /* by reference */
	Vehicle(Vehicle*); /* by pointer */

	~Vehicle(); /* destructor */

	void setNumWheels(int);
	//int getNumWheels(void); /* to return numWheels */ used LAB 4
	void setNumDoors(int);
	//int getNumDoors(void); /* to return numDoors */ used LAB 4

	void printVehicle(void);

	Vehicle& operator=(Vehicle&); /* 2 */
	bool operator==(const Vehicle&); /* 3 */
	bool operator!=(const Vehicle&); /* 4 */
	Vehicle& operator++(); /* 5-a */
	Vehicle& operator++(int i); /* 5-b */
	Vehicle& operator--(); /* 5-c */
	Vehicle& operator--(int i); /* 5-d */

	friend ostream& operator<<(ostream&, const Vehicle&); /* 6 */

};

//void CreateVehicle(Vehicle& v, int w = 4, int d = 2); used LAB 4