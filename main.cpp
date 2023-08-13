#include <iostream>

int main() {

    // declaring arrays with initial values
    // Element_type array_name [array_size] {initial_values};
    int test_scores [5] {100, 95, 99, 87, 88};
    int high_score_per_level [10] {3, 5}; // first two elements are initialized to 3 and 5, the rest are initialized to 0
    const int days_in_year {365};
    double hi_temperatures [days_in_year] {0}; // all elements are initialized to 0
    int another_array [] {1, 2, 3, 4, 5}; // compiler figures out the size of the array

    // accessing the elements in the array
    std::cout << test_scores[0] << std::endl; // 100
    std::cout << test_scores[4] << std::endl; // 88
    std::cout << test_scores[5] << std::endl; // garbage value

    // changing the value of an element
    test_scores[0] = 99;
    std::cout << test_scores[0] << std::endl; // 99

    return 0;
}
