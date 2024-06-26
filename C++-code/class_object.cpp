#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{
    Student jaynal;
    jaynal.roll = 55;
    jaynal.cls = 20;
    jaynal.section = 'A';
    char nm[100] = "Jaynal Abdin";
    strcpy(jaynal.name, nm);

    Student gias;
    gias.roll = 54;
    char nm2[50] = "Gias Uddin";
    strcpy(gias.name, nm2);

    cout << jaynal.name << endl;
    cout << jaynal.roll << endl;
    cout << jaynal.cls << endl;
    cout << jaynal.section << endl;

    cout << gias.name << endl;
    cout << gias.roll << endl;

    return 0;
}