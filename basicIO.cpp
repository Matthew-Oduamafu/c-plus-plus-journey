//
// Created by Matthew on 12/08/2023.
//

/***
 * This is a basic input/output program
 * @return
 */

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    cout << "Hello " << endl << "World!" << endl;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;

    // chaining
    int x, y;
    cout << "Enter two numbers separated by space: ";
    cin >> x >> y;
    cout << "The sum of " << x << " and " << y << " is " << x + y << endl;
    return 0;
}
