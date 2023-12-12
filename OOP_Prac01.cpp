#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex();
    complex operator+(complex obj);
    complex operator*(complex obj);
    friend istream &operator>>(istream &, complex &);
    friend ostream &operator<<(ostream &, const complex &);
};
complex::complex()
{
    real = 0;
    img = 0;
}
complex complex::operator+(complex obj)
{
    complex temp;
    temp.real = real + obj.real;
    temp.img = img + obj.img;
    return temp;
}
complex complex::operator*(complex obj)
{
    complex temp;
    temp.real = ((real * obj.real) - (img * obj.img));
    temp.img = ((real * obj.img) + (img * obj.real));
    return temp;
}
istream &operator>>(istream &in, complex &c3)
{
    cin >> c3.real >> c3.img;
    return in;
}
ostream &operator<<(ostream &out, const complex &c4)
{
    cout << c4.real << "+" << c4.img << "i";
    return out;
}
int main()
{
    complex c1, c2, c3, c4;
    cout << "Default Constructor values : " << c1 << endl;
    cout << "Enter Value for 1st complex no. (a + ib) " << endl;
    cin >> c1;
    cout << "Enter Value for 2nd complex no. (a + ib) " << endl;
    cin >> c2;
    c3 = c1 + c2;
    c4 = c1 * c2;
    cout << "Sum of numbers is : " << c3 << endl;
    cout << "Product of numbers is : " << c4 << endl;
    return 0;
}