//
// Created by Matthew on 12/08/2023.
//
/**
 * Declaring constants
 * @return
 */

#include <iostream>
#define pi 3.14159 // one way to declare constants using preprocessor directive

using namespace std;

int main() {

    cout << "Declaring constants" << endl;

    const double PI {3.14159}; // one way to declare constants using const keyword
    const int month_in_year {12};
//    PI= 35.5; // This will throw an error because PI is a constant

    return 0;
}
