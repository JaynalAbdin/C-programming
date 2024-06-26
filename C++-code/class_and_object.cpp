#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int age;
    int id;
};

int main()
{
    Student jaynal;
    jaynal.age = 28;
    jaynal.id = 191;
    char nm[100] = "Jaynal";
    strcpy(jaynal.name, nm);

    Student kabir;
    kabir.age = 50;
    char nm2[50] = "Kabir Hossain";
    strcpy(kabir.name, nm2);

    cout << "Name:" << jaynal.name << endl;

    cout << "Age:" << jaynal.age << endl;
    cout << "ID: " << jaynal.id << endl;
    cout << "Name: " << kabir.name << endl;
    cout << "Age: " << kabir.age << endl;

    return 0;
}