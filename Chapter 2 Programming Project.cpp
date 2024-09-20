//Jacob Walrath
//9/19/2024
//Chapter 2 Programming Project
//Distance_per_Tank

#include <iostream>
using namespace std;

int main()
{
    double gas_tank = 20;

    double town = 23.5;
    double highway = 28.9;

    string method;

    cout << "Are you travelling in town or on the highway? Type one of the two in all lowercase. ";
    cin >> method;

    double distance = gas_tank * method;

    cout << "You will be able to drive " << distance << " miles in that case!";

    return 0;
}