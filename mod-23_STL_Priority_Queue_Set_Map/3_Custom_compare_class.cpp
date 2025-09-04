#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll; // ascending order of roll
        }
        return a.marks < b.marks; // descending order of marks
    }
};

main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        int marks;

        cin >> name >> roll >> marks;
        Student st(name, roll, marks);
        pq.push(st);
    }

    while (!pq.empty())
    {
        Student top = pq.top();
        cout << top.name << " " << top.roll << " " << top.marks << endl;
        pq.pop();
    }

    return 0;
}
