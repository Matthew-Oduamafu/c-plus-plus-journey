//
// Created by Matthew on 12/08/2023.
//

/**
* This program demonstrates the use of vectors.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    // declare a vector
    // vector <type> name;
    vector <char> vowels (5); // empty
    vector <int> test_scores (10); // 10 elements initialized to 0
    vector <double> hi_temperatures (365, 80.0); // 365 elements initialized to 80.0

    // declaring and initializing a vector
    vector <char> vowels1 {'a', 'e', 'i', 'o', 'u'};
    vector <int> test_scores2 {100, 98, 89, 85, 93};
    vector <double> hi_temperatures2 (365, 80.0);

    // accessing elements in a vector
    cout << vowels1[0] << endl; // a
    cout << test_scores2[4] << endl; // 93
    cout << hi_temperatures2[0] << endl; // 80.0

    // using the .at() method to access elements in a vector
    cout << vowels1.at(0) << endl; // a
    cout << test_scores2.at(4) << endl; // 93
    cout << hi_temperatures2.at(0) << endl; // 80.0

    // vectors are dynamic, so we can add elements to them
    // vector_name.push_back(element);
    vector <int> test_scores3 {100, 98, 89};
    test_scores3.push_back(80); // {100, 98, 89, 80}


    // 2D vectors
    vector <vector<int>> movie_ratings {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };
    cout << movie_ratings.at(0).at(0) << endl; // 1
    cout << movie_ratings.at(0).at(1) << endl; // 2
    cout << movie_ratings.at(0).at(2) << endl; // 3
    cout << movie_ratings.at(0).at(3) << endl; // 4
    cout << movie_ratings.at(1).at(0) << endl; // 1
    cout << movie_ratings.at(1).at(1) << endl; // 2
    cout << movie_ratings.at(1).at(2) << endl; // 4
    cout << movie_ratings.at(1).at(3) << endl; // 4
    cout << movie_ratings.at(2).at(0) << endl; // 1
    cout << movie_ratings.at(2).at(1) << endl; // 3
    cout << movie_ratings.at(2).at(2) << endl; // 4
    cout << movie_ratings.at(2).at(3) << endl; // 5


    return 0;
}