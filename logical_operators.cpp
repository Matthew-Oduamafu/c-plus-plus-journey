//
// Created by Matthew on 13/08/2023.
//

#include <iostream>
using namespace std;

int main(){

    cout << boolalpha;

    bool result = (true && false); // and operator using &&
    bool result_1 = (true and false); // and operator using and keyword

    bool result_2 = (true || false); // or operator using ||
    bool result_3 = (true or false); // or operator using or keyword

    // short circuit evaluation
    bool result_4 = (true && false && true); // false && true = false so no need to evaluate the last true
    bool result_5 = (true || false || true); // true || false = true so no need to evaluate the last true

    int num{};
    const int lower{10};
    const int upper{20};
    cout<< "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
    cin >> num;
    // checking if the number is outside the bounds
    bool within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl;
    bool outside_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << endl;

    //check if number is on bounds
    bool on_bounds = (num == lower || num == upper);
    cout << num << " is on one of the bounds which are " << lower << " and " << upper << " : " << on_bounds << endl;
    return 0;
}