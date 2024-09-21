#include<iostream>
using namespace std;
int main() 
{
	cout << "CAR  PARKING" << endl; 
	while (true) {

		int enter;
		int car = 0, bike = 0, bus = 0, record = 0;

		cout << "Press 1 to enter car" <<endl;
		cout << "Press 2 to enter bike" <<endl;
		cout << "Press 3 to enter bus" << endl;
		cout << "Press 4 to show the record" << endl;
		cout << "Press 5 to delete the record" << endl;
		cout << "Press 6 to exit" << endl;
		cin >> enter;

		if (enter == 1) {
			car++;
			cout << "Car is added." << endl;
		}
		else if (enter == 2) {
			bike++;
			cout << "Bike is added." << endl;
		}
		else if (enter == 3) {
			bus++;
			cout << "Bus is added." << endl;
		}
		else if (enter == 4) {
			cout << "Car: " << car << endl;
			cout << "Bike: " << bike << endl;
			cout << "Bus: " << bus << endl;
			record = car + bike + bus;
			cout << "All: " << record << endl;
		}
		else if (enter == 5) {
			car = 0;
			bike = 0;
			bus = 0;
		}
		else if (enter == 6) {
			exit(0);
		}
		else {
			cout << "Please choose a correct number from the menu" << endl;
		}
	}
}
