#include <iostream>
#include <vector>
#include <string>

using namespace std;

class ParkingSpace {
public:
    string name;
    string address;
    string landmark;
    bool available;

    ParkingSpace() : available(true) {}  // Constructor to initialize availability to true

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

        cout << "Availability: " << (available ? "Available" : "Occupied") << endl;
    }
};

int main() {
    vector<ParkingSpace> parkingSpaces;  // Vector to store parking space objects

    int numSpaces;
    cout << "Enter the number of parking spaces: ";
    cin >> numSpaces;
    cin.ignore(); // Clear the input buffer

    // Collect information for each parking space
    for (int i = 0; i < numSpaces; ++i) {
        ParkingSpace space;
        cout << "\nEnter information for Parking Space " << i + 1 << ":\n";
        space.inputDetails();
        parkingSpaces.push_back(space);  // Add the parking space to the vector
    }

    // Display information for each parking space
    for (const auto& space : parkingSpaces) {
        space.displayDetails();
    }

    // Check if a specific parking space is available
    int spaceToCheck;
    cout << "\nEnter the number of the parking space to check availability: ";
    cin >> spaceToCheck;

    if (spaceToCheck >= 1 && spaceToCheck <= numSpaces) {
        // Adjusting index for 0-based vector
        ParkingSpace& checkedSpace = parkingSpaces[spaceToCheck - 1];
        cout << "Parking Space " << spaceToCheck << " is " << (checkedSpace.available ? "available." : "occupied.") << endl;
    } else {
        cout << "Invalid parking space number." << endl;
    }

    return 0;
}
