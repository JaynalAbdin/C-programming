#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    int age;

    Student(int idd, char *n, int ag)
    {
        id = idd;
        strcpy(name, n);
        age = ag;
    }
};

int main()
{
    char name[100] = "Jaynal";
    Student *jaynal = new Student(15, name, 28);
    cout << jaynal->name << endl;
    cout << jaynal->id << endl;
    cout << jaynal->age << endl;

    return 0;
}