class ParkingSystem
{
private:
    int bigSpaces, mediumSpaces, smallSpaces;

public:
    // Constructor to initialize parking slots for each car type
    ParkingSystem(int big, int medium, int small)
    {
        bigSpaces = big;
        mediumSpaces = medium;
        smallSpaces = small;
    }

    // Method to add a car and check if parking is possible
    bool addCar(int carType)
    {
        if (carType == 1 && bigSpaces > 0)
        {
            bigSpaces--; // Park a big car
            return true;
        }
        if (carType == 2 && mediumSpaces > 0)
        {
            mediumSpaces--; // Park a medium car
            return true;
        }
        if (carType == 3 && smallSpaces > 0)
        {
            smallSpaces--; // Park a small car
            return true;
        }
        return false; // No space available for the car
    }
};

// Example usage
#include <iostream>
using namespace std;

int main()
{
    // Initialize the parking system with 1 big, 1 medium, and 0 small spaces
    ParkingSystem parkingSystem(4, 1, 0);

    cout << "Add big car: " << (parkingSystem.addCar(1) ? "Parked" : "No space") << endl;
    cout << "Add big car: " << (parkingSystem.addCar(1) ? "Parked" : "No space") << endl;
    cout << "Add big car: " << (parkingSystem.addCar(1) ? "Parked" : "No space") << endl;

    cout << "Add medium car: " << (parkingSystem.addCar(2) ? "Parked" : "No space") << endl;

    cout << "Add small car: " << (parkingSystem.addCar(3) ? "Parked" : "No space") << endl;

    cout << "Add another big car: " << (parkingSystem.addCar(1) ? "Parked" : "No space") << endl;

    return 0;
}
