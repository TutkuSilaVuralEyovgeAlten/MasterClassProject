#include <iostream>
#include <string>

using namespace std;
int main()
{
    //First assignment
    double temp;
    cout << "What is the temperature?" << endl;
    cin >> temp;

    double fah = (1.8 * temp) + 32;

    cout << "Temperature is " << fah << " Fahrenheit" << endl;

    return 0;
}