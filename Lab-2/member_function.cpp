// A member function in C++ is a function that is declared inside 
// a class and operates on objects of that class.
//  It has access to the class's private and protected data members.
#include <iostream>
using namespace std;

// Class definition
class Car {
private:
    string brand;
    int speed;

public:
    // Constructor
    Car(string b, int s) {
        brand = b;
        speed = s;
    }

    // Member function declared inside the class
    void showDetails() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }

    // Member function declared inside the class but defined outside
    void accelerate(int increase);
};

// Member function definition outside the class
void Car::accelerate(int increase) {
    speed += increase;
    cout << brand << " accelerated to " << speed << " km/h" << endl;
}

int main() {
    // Creating an object of Car
    Car myCar("Toyota", 100);

    // Calling a member function
    myCar.showDetails();

    // Calling another member function
    myCar.accelerate(20);

    return 0;
}
