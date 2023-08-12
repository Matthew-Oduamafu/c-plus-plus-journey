#include <iostream>

/*** INTRO TO C++ ***/

int main(){

    int favourite_number;  // declare variable favourite_number
/* Multiple lines of comment*/
    std::cout << "Enter your favourite number between 1 to 100: " ;

    std::cin >> favourite_number;
    std::cout <<"\nAmazing that's my favourite number too" << std::endl;
    std::cout << "No really!! " << favourite_number << " is my favourite number!" << std::endl;
    return 0;
}