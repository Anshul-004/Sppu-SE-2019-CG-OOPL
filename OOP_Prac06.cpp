#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age, income;
    string city, vehicle;

    cout << "Enter Your age : " << endl;
    cin >> age;
    cout << "Enter Your income : " << endl;
    cin >> income;
    cout << "Enter Your city : " << endl;
    cin >> city;
    cout << "Enter Your vehicle : " << endl;
    cin >> vehicle;

    try
    {
        if (age >= 18 && age <= 55)
        {
            cout << "Your age is : " << age << endl;
        }
        else
        {
            throw age;
        }
    }
    catch (int)
    {
        cout << "Your age is not accepted" << endl;
    }

    try
    {
        if (income >= 50000 && income <= 100000)
        {
            cout << "Your Income is : " << income << endl;
        }
        else
        {
            throw income;
        }
    }
    catch (int)
    {
        cout << "Your Income is not acceptable " << endl;
    }

    try
    {
        if (city == "pune" || city == "mumbai" || city == "banglore" || city == "chennai")
        {
            cout << "You Live in : " << city << endl;
        }
        else
        {
            throw city;
        }
    }
    catch (string)
    {
        cout << "Your city is not accepted" << endl;
    }

    try
    {
        if (vehicle == "4wheeler")
        {
            cout << "Nice" << endl;
        }
        else
        {
            throw vehicle;
        }
    }
    catch (string)
    {
        cout << "Your vehicle is not accepted" << endl;
    }

    return 0;
}