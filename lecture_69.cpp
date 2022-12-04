#include <iostream>
using namespace std;
class student
{
    int age1;
    int age2;

public:
    friend ostream &operator<<(ostream &out, student &obj);
    friend istream &operator>>(istream &in, student &obj);
};
istream &operator>>(istream &in, student &obj)
{
    cout << "Enter the age of student 1:";
    in >> obj.age1;
    cout << "Enter teh age of student 2:";
    cin >> obj.age2;
    return in;
}
ostream &operator<<(ostream &out, student &obj)
{
    cout << "The age of student 1 is :";
    cout << obj.age1;
    cout << "\nThe age of student 2 is :";
    cout << obj.age2;
    return out;
}
int main()
{
    student obj;
    cin >> obj;
    cout << obj;
    return 0;
}