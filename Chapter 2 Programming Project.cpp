//Jacob Walrath
//9/19/2024
//Chapter 2 Programming Project
//Ocean_Levels

#include <iostream>
using namespace std;

int main()
{
    double years;

    cout << "Enter an amount of years: ";
    //The user will be able to enter any number of years, but 5, 7, and 10 will be used for this specific project.
    cin >> years;

    double high = years * 1.5;

    cout << "The ocean level will be " << high << " mm. higher in " << years << " years!" << endl;

    cout << "Enter an amount of years again: ";
    //This process is repeated three times in order to fit all instructions into the program by only running it once.
    cin >> years;
    high = years * 1.5;
    //Storing a new value into years and storing that value into high again is crucial here.
    cout << "The ocean level will be " << high << " mm. higher in " << years << " years!" << endl;

    cout << "Enter an amount of years once more: ";
    cin >> years;
    high = years * 1.5;
    cout << "The ocean level will be " << high << " mm. higher in " << years << " years!" << endl;

    return 0;
}