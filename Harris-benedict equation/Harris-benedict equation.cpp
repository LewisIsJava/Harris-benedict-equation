// Harris-benedict equation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
 int main()
{
     char gender;
     double weight, height, bmr, chocolateBarCount;
     int age, chocolateBarCalories = 230;
     cout << "Please enter your age in years: ";
     cin >> age;
     cout << "Please enter your height in inches: ";
     cin >> height;
     cout << "Please enter your weight in pounds: ";
     cin >> weight;
     cout << "Enter your gender, F for female & M for male: ";
     cin >> gender;


     if (gender == 'M' || gender == 'm')
     {
         bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
         cout << "Your basal metabolic rate is: " << bmr << endl;
         chocolateBarCount = bmr / chocolateBarCalories;
     }
     else if (gender == 'F' || gender == 'f')
     {
         bmr = 655 + (6.3 * weight) + (4.7 * height) - (4.7 * age);
         cout << "Your basal metabolic rate is: " << bmr << endl;
         chocolateBarCount = bmr / chocolateBarCalories;
     }
     cout << "You need to eat " << chocolateBarCount << " chocolate bars to maintain weight";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
