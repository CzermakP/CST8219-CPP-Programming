
#include<iostream>

using namespace std;

namespace CST8219 {
	class Vehicle {
		int numWheels, numDoors;

	public:
		Vehicle() : Vehicle(4) {
			cout << "In constructor with 0 parameters" << endl;
		}
	
		Vehicle(int w) : Vehicle(w, 4) {
			cout << "In constructor with 1 parameters, wheels =" << w << endl;
		}
		
		Vehicle(int w, int d) {
			cout << "In constructor with 2 parameters" << endl;
			setNumWheels(w);
			setNumDoors(d);
		}
		
		~Vehicle() {
			cout << "In destructor" << endl;
		}
	protected:
		void setNumWheels(int w) { numWheels = w; }
		void setNumDoors(int d) { numDoors = d; }
	};
}

using namespace CST8219;
int main(int argc, char **argv)
{
	int d, w;
	char userInput;

	Vehicle veh1;
	Vehicle veh2(4);
	Vehicle veh3(4, 2);
	Vehicle* pVehicle;
	cout << "I made a Vehicle!" << endl;
	cout << "Vehicle takes " << sizeof(veh1) << endl;
	cout << "Vehicle takes " << sizeof(veh2) << endl;
	cout << "Vehicle takes " << sizeof(veh3) << endl;

	do {

		cout << "Enter number of doors: " << endl;
		while ((!(cin >> d)) | (d < 0)) { //if doors input is less than 0, error msg, try again
			cout << "that's not a positive integer, please try again!" << endl;
			cout << "Enter number of doors: " << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}

		cout << "Enter number of wheels: " << endl;
		while ((!(cin >> w)) | (w < 0)) { //if wheels input is less than 0, error msg, try again
			cout << "that's not a positive integer, please try again!" << endl;
			cout << "Enter number of wheels: " << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}
		//have valid w+d numbers now, create new Vehicle object
		pVehicle = new Vehicle(w, d);

		cout << "enter 'q' to quit, OR any other character to create a new Vehicle" << endl;
		cin >> userInput;
		if (userInput != 'q') {
			delete pVehicle; //have to delete the vehicle already created in order to properly create a new Vehicle
		}

	} while (userInput != 'q');
		
	return 0;
}