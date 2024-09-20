//Jacob Walrath
//9/19/2024
//Chapter 2 Programming Project
//Distance_per_Tank

#include <iostream>
using namespace std;

int main()
{
    double gas_tank = 20.0;

    double town = 23.5;
    double highway = 28.9;

    double town_distance = town * gas_tank;
    double highway_distance = highway * gas_tank;

    cout << "You will be able to drive " << town_distance << " miles in town and " << highway_distance << " miles on the highway!";

    return 0;
}