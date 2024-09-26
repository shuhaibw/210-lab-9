// COMSC-210 | Lab 9 | Shuhaib Walahi

#include <iostream>
#include <array>

using namespace std;

const int SIZE = 100;

int main() {

    // array to hold the numbers
    array<int,SIZE> numbers;

    // populate array with 1-100
    for (int i = 0; i < SIZE; i++)
    {
        numbers[i] = i + 1;
    }

    // output values seperated by commas
    for (int val: numbers)
    {
        cout << val;
        if (val < SIZE)
        {
            cout << ", ";
        }
    }

    return 0;
}