#include <iostream>
#include <fstream>
using namespace std;
class student
{
private:
    string name;
    int rollno;

public:
    void add_info()
    {
        fstream fs;
        fs.open("main.txt", ios::app);
        if (!fs)
            cout << "File Creation failed";
        else
        {
            cout << "enter name of student :";
            cin >> name;
            cout << "enter roll no.:";
            cin >> rollno;
            fs << name << " ";
            fs << rollno << "\n";
            fs.close();
        }
    }
    void display()
    {
        fstream fs;
        fs.open("main.txt", ios::in);
        if (!fs)
            cout << "No Such file";
        else
        {
            while (!fs.eof())

            {
                fs >> name;
                fs >> rollno;
                if (!fs.eof())
                {
                    cout << name << " ";
                    cout << rollno << " ";
                }
                cout << "\n";
            }
        }
        fs.close();
    }
};
int main()
{
    student s1;
    int ch;
    fstream fs;
    do
    {
        cout << "\n Student database:";
        cout << "\n Menu";
        cout << "\n 1. Add student Information";
        cout << "\n 2. Display student Information";
        cout << "\n 3. Exit";
        cout << "\n Enter your choice";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s1.add_info();
            break;
        case 2:
            s1.display();
            break;
        case 3:
            exit(0);
        }
    } while (ch != 3);

    return 0;
}