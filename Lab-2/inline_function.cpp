// An inline function in C++ is a function that the compiler 
// attempts to expand in place, instead of performing a regular 
// function call. This can improve performance by eliminating the
// overhead of a function call, especially for small, frequently 
// called functions.
#include <iostream>

using namespace std;

// Inline function to calculate the square of a number
inline int square(int x) {
    return x * x;
}

int main() {
    int num = 5;
    cout << "Square of " << num << " is: " << square(num) << endl;
    return 0;
}
