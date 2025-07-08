// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
//     public:
//     char name[100];  // 100 byte
//     int roll;  // 4 byte
//     double gpa;  // 8 byte
// };

// int main()
// {
//     Student a;
//     a.roll = 23;
//     a.gpa = 3.56;
//     char temp[100] = "Nure Alam";
//     strcpy(a.name, temp);

//     cout << a.name << " " << a.roll << " " << a.gpa << endl;
//     return 0;
// }




// use input
// #include <bits/stdc++.h>
// using namespace std;

// class Student
// {
//     public:
//     char name[100];  // 100 byte
//     int roll;  // 4 byte
//     double gpa;  // 8 byte
// };

// int main()
// {
//     Student a,b;
//     cin >> a.name >> a.roll >> a.gpa;
//     cin >> b.name >> b.roll >> b.gpa;

//     cout << a.name << " " << a.roll << " " << a.gpa << endl;
//     cout << b.name << " " << b.roll << " " << b.gpa << endl;
//     return 0;
// }



// use getline for input string with space
#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];  // 100 byte
    int roll;  // 4 byte
    double gpa;  // 8 byte
};

int main()
{
    Student a,b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cin.ignore();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
    return 0;
}