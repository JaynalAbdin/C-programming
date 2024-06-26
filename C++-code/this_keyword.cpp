#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person p("Jaynal", 28);
    cout << p.name << " " << p.age << endl;
    return 0;
}