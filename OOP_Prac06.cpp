#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int age;
    double income;
    char city[15];
    int car;
    cout << " " << endl;
    cout << "Enter The Age:";
    cin >> age;
    cout << "Enter The Income:";
    cin >> income;
    cout << "Enter The City:";
    cin >> city;
    cout << "Enter The Car :";
    cin >> car;
    cout << " " << endl;
    try
    {
        if (age < 18 || age > 55)
        {
            throw age;
        }
        else
        {
            cout << "Your Age Is:" << age << endl;
        }
    }
    catch (int)
    {
        cout << "Invalid Input" << endl;
        cout << "NOTE: "
             << "You have Enter Invalid Age" << endl;
    }
    try
    {
        if (income < 50000 || income > 1000000)
        {
            throw income;
        }
        else
        {
            cout << "Your income Is:" << income << endl;
        }
    }
    catch (double)
    {
        cout << "Invalid Input" << endl;
        cout << "NOTE: "
             << "You have Enter Invalid income" << endl;
    }
    try
    {
        if (car != 2 && car != 4)
        {
            throw car;
        }
        else
        {
            cout << "Your are using a " << car << " wheeler car " << endl;
        }
    }
    catch (int)
    {
        cout << "Invalid Input" << endl;
        cout << "NOTE:"
             << "You have Enter Invalid car" << endl;
    }
    try
    {
        if (strcmp(city, "Pune") && strcmp(city, "Mumbai") && strcmp(city, "Banglore") && strcmp(city, "Chennai"))
        {
            throw city;
        }
        else
        {
            cout << "Your city Is:" << city << endl;
        }
    }
    catch (char[])
    {
        cout << "Invalid Input" << endl;
        cout << "NOTE:"
             << "You have Enter Invalid city" << endl;
    }
    return 0;
}
