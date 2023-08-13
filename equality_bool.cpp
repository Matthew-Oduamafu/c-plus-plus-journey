//
// Created by Matthew on 13/08/2023.
//

#include <iostream>
using namespace std;

int main(){

    bool result {false};
    cout << result << endl;

    result = (100 == 50 + 50);

    cout<< boolalpha;
    cout << result << endl;
    cout<< noboolalpha;
    return 0;
}