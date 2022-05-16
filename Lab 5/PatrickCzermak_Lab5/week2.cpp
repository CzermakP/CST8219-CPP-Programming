
#include<iostream>
#include "Vehicle.h"

using namespace std;


void CreateVehicle(Vehicle& v, int w = 4, int d = 2) {
	v.setNumWheels(w);
	v.setNumDoors(d);

}

int main(int argc, char **argv) {

	Vehicle original;
	Vehicle copy(original); // copy constructor by reference

	cout << "Original is: " << original << " copy is: " << copy << endl;

	cout << "Increment original: " << original++ << endl;
	cout << "Increment copy:" << ++copy << endl;

	cout << "Decrement original:" << --original << endl;
	cout << "Decrement copy:" << copy-- << endl;

	// should be true :
	cout << "Compare equality 1: " << (original == copy) << endl;

	//should be false:
	cout << "Compare equality 2: " << (--original == ++copy) << endl;

	//should be true:
	cout << "Compare inequality: " << (original != copy) << endl;

	//This should make original = copy, and then return a Vehicle for output:
	cout << "Assignment operator: " << (original = copy) << endl;
	return 0;


	//Vehicle original;    //empty constructor no ( )

	//Vehicle copy(original); // copy constructor by reference

	//Vehicle secondCopy(&original); //copy constructor by pointer
	//copy.printVehicle();
	//CreateVehicle(copy, 2); //wheels is 2, everything else is default value
	//copy.printVehicle();
	//CreateVehicle(copy, 2, 3); //wheels is 2, doors is 3
	//copy.printVehicle();
	//copy = secondCopy;
	//copy.printVehicle();	// copy is same as second copy
	//return 0;

}