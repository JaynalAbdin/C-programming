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
    Person *jaynal = new Person("Jaynal", 28);
    Person *gias = new Person("Gias", 30);

    *gias = *jaynal;
    delete jaynal;
    cout << gias->name << " " << gias->age << endl;

    return 0;
}