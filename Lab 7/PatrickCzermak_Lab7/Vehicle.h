#pragma once
//#include <iostream>

using namespace std;

template<class T>
class Vehicle {
protected:
	T numWheels, numDoors;
	//float engineEfficiency;

public:
	inline Vehicle() {
		cout << "In constructor with 0 parameters" << endl;
	}
	inline Vehicle(T w) {
		cout << "In constructor with 1 parameter. Wheels = " << w << endl;
	}
	inline Vehicle(T w, T d) {
		cout << "In constructor with 2 parameters. Wheels = " << w << " Doors = " << d << endl;
		setNumWheels(w);
		setNumDoors(d);
	}

	/* copies of vehicle */
	inline Vehicle(Vehicle&) { /* by reference */
		cout << "Address of copy by reference(&) is: " << &copy << endl;
	}
	inline Vehicle(Vehicle*) { /* by pointer */
		cout << "Address of copy by pointer(*) is: " << copy << endl;
	}

	inline ~Vehicle() { /* destructor */
		cout << "In Vehicle destructor" << endl;
	}

	inline void setNumWheels(int w) {
		numWheels = w;
	}
	inline T getNumWheels(void) const {
		return numWheels;
	}
	inline void setNumDoors(int d) {
		numDoors = d;
	}
	inline T getNumDoors(void) const {
		return numDoors;
	}

	inline void printVehicle(void) {
		cout << "Vehicle with: "
			 << " Wheels = " << numWheels
			 << " Doors = " << numDoors << endl;
	}

	//virtual float calculateRange() = 0;
	//virtual float percentEnergyRemaining() = 0;
	//virtual void drive(float km) = 0;

	//Vehicle& operator=(Vehicle&); /* 2 */
	//bool operator==(const Vehicle&); /* 3 */
	//bool operator!=(const Vehicle&); /* 4 */
	//Vehicle& operator++(); /* 5-a */
	//Vehicle& operator++(int i); /* 5-b */
	//Vehicle& operator--(); /* 5-c */
	//Vehicle& operator--(int i); /* 5-d */

	//friend ostream& operator<<(ostream&, const Vehicle&); /* 6 */

	//inline void CreateVehicle(Vehicle& v, int w = 4, int d = 2);
};

 