#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    char name[50];
    float height;
    int age;

    Person(char *nm, float h, int ag)
    {
        strcpy(name, nm);
        // name = n;
        height = h;
        age = ag;
    }
};

int main()
{
    char nm[50] = "Jaynal";
    Person *j = new Person(nm, 5.5, 28);
    cout << j->name << endl;
    cout << j->height << endl;
    cout << j->age << endl;

    return 0;
}