#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    float price;

public:
    // Constructor
    Car(string m, string mod, int y, float p) : make(m), model(mod), year(y), price(p) {}

    // Method to display car information
    void displayInfo() const {
        cout << "Make: " << make << "\nModel: " << model << "\nYear: " << year << "\nPrice: $" << price << "\n\n";
    }

    // Method to apply depreciation
    void applyDepreciation(float percentage) {
        price -= price * (percentage / 100);
    }

    // Method to check if the car is antique
    bool isAntique() const {
        time_t t = time(0);
        tm* now = localtime(&t);
        int currentYear = now->tm_year + 1900;
        return (currentYear - year) > 25;
    }
};

int main() {
    // Creating Car objects
    Car car1("Toyota", "Camry", 1995, 5000);
    Car car2("Ford", "Mustang", 2010, 15000);
    Car car3("Honda", "Civic", 2005, 8000);

    // Display initial car information
    cout << "Initial Car Details:\n";
    car1.displayInfo();
    car2.displayInfo();
    car3.displayInfo();

    // Apply depreciation
    car1.applyDepreciation(10);
    car2.applyDepreciation(5);
    car3.applyDepreciation(7);

    // Display car information after depreciation
    cout << "After Applying Depreciation:\n";
    car1.displayInfo();
    car2.displayInfo();
    car3.displayInfo();

    // Check if cars are antique
    cout << "Antique Status:\n";
    cout << "Car 1 is " << (car1.isAntique() ? "an antique.\n" : "not an antique.\n");
    cout << "Car 2 is " << (car2.isAntique() ? "an antique.\n" : "not an antique.\n");
    cout << "Car 3 is " << (car3.isAntique() ? "an antique.\n" : "not an antique.\n");

    return 0;
}
