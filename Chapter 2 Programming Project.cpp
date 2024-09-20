//Jacob Walrath
//9/19/2024
//Chapter 2 Programming Project
//Energy_Drink_Consumption

#include <iostream>
using namespace std;

int main()
{
    double survey = 16500;

    double one_or_more = 0.15;
    double citrus = 0.58;

    double customers_one_or_more = one_or_more * survey;
    double customers_citrus = citrus * survey;

    cout << "Out of 16,500 customers " << customers_one_or_more << " drink one or more " <<
    "energy drinks per week and " << customers_citrus << " prefer citrus - flavored drinks.";
    //Split for easier reading (no need to side-scroll)

    return 0;
}
