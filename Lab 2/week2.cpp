
#include<iostream>

using namespace std;

namespace CST8219 {
	class Vehicle {
		int numWheels, numDoors;

	public:
		//constructor a
		Vehicle() : Vehicle(4) {
			cout << "In constructor with 0 parameters" << endl;
		}
		//constructor b
		Vehicle(int w) : Vehicle(w, 4) {
			cout << "In constructor with 1 parameter, wheels=" << w << endl;
		}
		//constructor c
		Vehicle(int w, int d) {
			cout << "In constructor with 2 parameters" << endl;
			setNumWheels(w);
			setNumDoors(d);
		}
		//deconstructor
		~Vehicle() {
			cout << "In deconstructor" << endl;
		}

	protected:
		void setNumWheels(int w) { numWheels = w; }
		void setNumDoors(int d) { numDoors = d; }
	};
}

using namespace CST8219;
int main(int argc, char** argv)
{
	Vehicle myVehicle(4, 2);
	cout << "I made a vehicle!" << endl;
	return 0;
}