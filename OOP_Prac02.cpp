#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    string name, DOB, blood_grp, addr, year_class, mob;
    int *roll_no;
    char div;

public:
    friend class faculty;
    student()
    {
        roll_no = new int;
        *roll_no = -1;
        div = -1;
        name = blood_grp = DOB = addr = year_class = mob = " ";
    }
    ~student()
    {
        delete roll_no;
    }
    void getdata()
    {
        cout << "\n\t Enter Student Information ";
        cout << "\nEnter your name: ";
        getline(cin, name);
        cout << "\nEnter Roll_no: ";
        cin >> *roll_no;
        cout << "\nEnter year(SE/TE/BE): ";
        cin >> year_class;
        cout << "\nEnter Division (A/B): ";
        cin >> div;
        cout << "\nEnter DOB: ";
        cin >> DOB;
        cout << "\nEnter Blood group: ";
        cin >> blood_grp;
        cout << "\nEnter mobile no: ";
        cin >> mob;
        cout << "\nEnter your address: ";
        cin >> addr;
    }
    void display()
    {

        cout << "\n\nName :" << name;
        cout << "\nRoll No :" << roll_no;
        cout << "\nYear(SE/TE/BE) :" << year_class;
        cout << "\nDiv (A/B) :" << div;
        cout << "\nDate Of Birth :" << DOB;
        cout << "\nBlood Group :" << blood_grp;
        cout << "\nMobile No :" << mob;
        cout << "\nAddress :" << addr;
        cout << endl;
    }
    static void header()
    {
        cout << "\nSTUDENT DATABASE ";
    }
};
class faculty
{
private:
    int id;

public:
    faculty()
    {
        id = 000;
    }
    faculty(const faculty &f1)
    {
        id = f1.id;
    }
    void f_display(student &obj, int f_d)
    {
        try
        {
            if (obj.div == f_d)
            {
                obj.display();
            }
            else
            {
                throw(obj.div);
            }
        }
        catch (int x)
        {
            cout << "\nInvalid Division";
        }
    }
};
int main()
{
    student s[5];
    faculty f;
    int ch = 0, count = 0;
    while (ch != 4)
    {
        cout << "\n***** MENU *****";
        cout << "\n1.Add Student";
        cout << "\n2.Display Student Information";
        cout << "\n3.Faculty wise Information";
        cout << "\n4.Exit\n";
        cout << "\nEnter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            s[count].getdata();
            count++;
            break;
        case 2:
            for (int i = 0; i < count; i++)
            {
                student::header();
                s[i].display();
            }
            break;
        case 3:
            int f_div;
            cout << "\nEnter division of faculty: ";
            cin >> f_div;
            for (int i = 0; i < count; i++)
            {
                cout << "\nSTUDENT INFORMATION SYSTEM\n";
                f.f_display(s[i], f_div);
            }
            break;
        case 4:
            cout << "\n***** SUCCESSFULLY TERMINATED *****\n";
            break;
        }
    }
    return 0;
}
