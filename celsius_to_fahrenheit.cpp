/*
 * Assignment: Convert Celsius to Fahrenheit using double.
 * Course: Computer Programming I - Module 3
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double celsius;
    double fahrenheit;

    cout << "Enter temperature in Celsius: ";

    if (!(cin >> celsius))
    {
        cout << "Invalid input. Please enter a number." << endl;
        return 1;
    }

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << fixed << setprecision(2);
    cout << celsius << " degrees Celsius is "
         << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}
