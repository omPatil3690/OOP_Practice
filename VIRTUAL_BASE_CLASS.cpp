#include <iostream>
using namespace std;

// Base Class: Vehicle (virtual base class to resolve the diamond problem)
class Vehicle
{
protected:
    int speed;
    int fuelCapacity;

public:
    Vehicle(int spd = 0, int fuel = 0) : speed(spd), fuelCapacity(fuel) {}

    virtual void displayInfo() const
    {
        cout << "Vehicle Information:\n";
        cout << "Speed: " << speed << " km/h\n";
        cout << "Fuel Capacity: " << fuelCapacity << " liters\n";
    }

    virtual ~Vehicle() {}
};

// Derived Class: LandVehicle (inherits Vehicle virtually)
class LandVehicle : virtual public Vehicle
{
protected:
    int wheelCount;
    int groundClearance;

public:
    LandVehicle(int spd = 0, int fuel = 0, int wheels = 4, int clearance = 0)
        : Vehicle(spd, fuel)
    {
        wheelCount = wheels;
        groundClearance = clearance;
    }

    void displayInfo() const override
    {
        Vehicle::displayInfo();
        cout << "Land Vehicle Details:\n";
        cout << "Wheel Count: " << wheelCount << "\n";
        cout << "Ground Clearance: " << groundClearance << " cm\n";
    }
};

// Derived Class: WaterVehicle (inherits Vehicle virtually)
class WaterVehicle : virtual public Vehicle
{
protected:
    int draft;        // Depth the vehicle is submerged
    int displacement; // Weight of water displaced

public:
    WaterVehicle(int spd = 0, int fuel = 0, int drft = 0, int displ = 0)
        : Vehicle(spd, fuel), draft(drft), displacement(displ) {}

    void displayInfo() const override
    {
        Vehicle::displayInfo();
        cout << "Water Vehicle Details:\n";
        cout << "Draft: " << draft << " meters\n";
        cout << "Displacement: " << displacement << " tons\n";
    }
};

// Derived Class: AmphibiousVehicle (inherits LandVehicle and WaterVehicle)
class AmphibiousVehicle : public LandVehicle, public WaterVehicle
{
public:
    AmphibiousVehicle(int spd, int fuel, int wheels, int clearance, int drft, int displ)
        : Vehicle(spd, fuel), LandVehicle(spd, fuel, wheels, clearance), WaterVehicle(spd, fuel, drft, displ) {}

    void displayInfo() const override
    {
        Vehicle::displayInfo();
        cout << "Amphibious Vehicle Details:\n";
        cout << "Wheel Count: " << wheelCount << "\n";
        cout << "Ground Clearance: " << groundClearance << " cm\n";
        cout << "Draft: " << draft << " meters\n";
        cout << "Displacement: " << displacement << " tons\n";
    }
};

// Main Function
int main()
{
    // Create a LandVehicle object
    LandVehicle car(120, 50, 4, 15);
    cout << "Land Vehicle:\n";
    car.displayInfo();

    // Create a WaterVehicle object
    WaterVehicle boat(30, 100, 5, 200);
    cout << "\nWater Vehicle:\n";
    boat.displayInfo();

    // Create an AmphibiousVehicle object
    AmphibiousVehicle amphibious(80, 60, 4, 20, 3, 250);
    cout << "\nAmphibious Vehicle:\n";
    amphibious.displayInfo();

    return 0;
}
