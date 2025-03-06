#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;

public:
    // Constructor to initialize dimensions
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    // Friend function to print box dimensions
    friend void printDimensions(const Box& b);
    
    // Friend class to calculate volume
    friend class VolumeCalculator;
};

// Friend function definition
void printDimensions(const Box& b) {
    cout << "Box Dimensions: " << b.length << " x " << b.width << " x " << b.height << endl;
}

class VolumeCalculator {
public:
    // Function to calculate volume of a Box
    double calculateVolume(const Box& b) {
        return b.length * b.width * b.height;
    }
};

int main() {
    // Creating a Box object
    Box myBox(5.0, 3.0, 2.0);
    
    // Printing dimensions using friend function
    printDimensions(myBox);
    
    // Creating a VolumeCalculator object
    VolumeCalculator calculator;
    
    // Calculating and displaying volume
    cout << "Box Volume: " << calculator.calculateVolume(myBox) << endl;
    
    return 0;
}
