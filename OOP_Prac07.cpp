#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Item
{
public:
    char name[10];
    int qty;
    int cost;
    int code;
    bool operator==(const Item &i1)
    {
        if (code == i1.code)
            return 1;
        return 0;
    }
    bool operator<(const Item &i1)
    {
        if (cost < i1.cost)
            return 1;
        return 0;
    }
};
vector<Item> o1;
void print(Item &i1);
void display();
void insert();
void search();
void del();
bool compare(const Item &i1, const Item &i2)
{
    return i1.cost < i2.cost;
}
int main()
{
    int ch;
    while (ch != 6)
    {
        cout << "*** Menu ***" << endl;
        cout << "1.Insert the Item Name:" << endl;
        cout << "2.Display the Item Name" << endl;
        cout << "3.Search the Item Name" << endl;
        cout << "4.Sort " << endl;
        cout << "5.Delete" << endl;
        cout << "6.Exit" << endl;
        cout << "Enter Your choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            sort(o1.begin(), o1.end(), compare);
            cout << "Sort the item by cost";
            display();
            break;
        case 5:
            del();
            break;
        case 6:
            exit(0);
        default:
            cout<<"Invalid Choice"<<endl;

        }
    } 
    return 0;
}
void insert()
{
    Item i1;
    cout << "Enter Item Name:";
    cin >> i1.name;
    cout << "Enter Item Quantity:";
    cin >> i1.qty;
    cout << "Enter Item Cost:";
    cin >> i1.cost;
    cout << "Enter Item Code:";
    cin >> i1.code;
    o1.push_back(i1);
}
void display()
{
    for_each(o1.begin(), o1.end(), print);
}
void print(Item &i1)
{
    cout << "Item Name:" << i1.name << endl;
    cout << "Item Qty:" << i1.qty << endl;
    cout << "Item Cost:" << i1.cost << endl;
    cout << "Item code:" << i1.code << endl;
}
void search()
{
    vector<Item>::iterator p;
    Item i1;
    cout << "Enter item code to search:";
    cin >> i1.code;
    p = find(o1.begin(), o1.end(), i1);
    if (p == o1.end())
        cout << "Not Found";
    else
    {
        cout << "Found";
    }
}
void del()
{
    vector<Item>::iterator p;
    Item i1;
    cout << "Enter item code to Delete:";
    cin >> i1.code;
    p = find(o1.begin(), o1.end(), i1);
    if (p == o1.end())
        cout << "Not Found";
    else
    {
        o1.erase(p);
        cout << "Deleted";
    }
}