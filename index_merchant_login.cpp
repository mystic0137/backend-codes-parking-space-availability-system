#include <iostream>
#include <string>

using namespace std;

class ParkingSpace {
public:
    string name;
    string address;
    string landmark;

    // Function to input parking space details
    void inputDetails() {
        cout << "Enter Parking Space Name: ";
        getline(cin, name);

        cout << "Enter Parking Space Address: ";
        getline(cin, address);

        cout << "Enter Landmark (optional): ";
        getline(cin, landmark);
    }

    // Function to display parking space details
    void displayDetails() {
        cout << "\nParking Space Details:\n";
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;

        if (!landmark.empty()) {
            cout << "Landmark: " << landmark << endl;
        }
    }
};

int main() {
    ParkingSpace parkingSpace;

    cout << "Enter Parking Space Information:\n";
    parkingSpace.inputDetails();

    // Display the entered details
    parkingSpace.displayDetails();

    return 0;
}
