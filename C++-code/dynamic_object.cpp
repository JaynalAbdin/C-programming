#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int age;
    int roll;

    Student(char nam[100], int ag, int r)
    {
        age = ag;
        roll = r;
        strcpy(name, nam);
        // name = nam;
    }
};

// Student fun()
// {
//     char nam[100] = "Jaynal Abdin";
//     Student j(nam, 28,11);
//     return j;
// }

int main()
{
    char name[100] = "Jaynal";
    Student *j = new Student(name, 28, 101);
    cout << j->name << endl;
    cout << (*j).age << endl;
    cout << j->roll << endl;
    // cout<<j.name<<endl;
    // cout<<j.roll<<endl;

    return 0;
}