#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string nm, int ag)
    {
        name = nm;
        age = ag;
    }
    void hello()
    {
        cout << "Hello" << endl;
    }
};

int main()
{
    Person jaynal("Jaynal", 28);
    jaynal.hello();
    cout << jaynal.name << " " << jaynal.age << endl;

    return 0;
}