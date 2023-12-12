#include <iostream>
using namespace std;

class publication
{
    string title;
    float price;

public:
    void add()
    {
        cout << "\n\nEnter the Information of the Publication" << endl;

        cout << "Enter the title of the publication: ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter the price of the publication: ";
        cin >> price;
    }

    void display()
    {
        cout << "\n\nTitle of the publication: " << title << endl;
        cout << "Price of the publication: " << price << endl;
        cout<<endl;
    }
};

class book : public publication
{
private:
    int page_count;

public:
    void add_book()
    {
        try
        {
            add();
            cout << "Enter the page count: ";
            cin >> page_count;

            if (page_count <= 0)
            {
                throw page_count = 0;
            }
        }
        catch (...)
        {
            cout << "Invalid page count" << endl;
            page_count = 0;
        }
    }

    void display_book()
    {
        display();
        cout << "page count: " << page_count << endl;
    }
};

class tape : public publication
{
private:
    float play_time;

public:
    void add_tape()
    {

        try
        {
            add();
            cout << "Enter play time (mins): ";
            cin >> play_time;

            if (play_time <= 0)
            {
                throw play_time = 0;
            }
        }
        catch (...)
        {
            cout << "Invalid play time Entered" << endl;
            play_time = 0;
        }
    }

    void display_tape()
    {
        display();
        cout << "Play time is: " << play_time << endl;
    }
};

int main()
{
    book b1[10];
    tape t1[10];

    int ch = 0, b_count = 0, t_count = 0;

    do
    {
        cout << "\n*** Publication Details ***" << endl;
        cout << "1.Add Book details\n2.Add Tape details\n3.Diplay Book details\n4.Display Tape details\n5.Exit\nEnter Your Choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            b1[b_count].add_book();
            b_count++;
            break;
        case 2:
            t1[t_count].add_tape();
            t_count++;
            break;
        case 3:
            for (int i = 0; i < b_count; i++)
            {
                b1[i].display_book();
            }
            break;
        case 4:
            for (int i = 0; i < t_count; i++)
            {
                t1[i].display_tape();
            }
            break;
        case 5:
            cout << "*** Terminated Successfully ***" << endl;
            break;
        default:
            break;
        }
    } while (ch != 5);

    return 0;
}
