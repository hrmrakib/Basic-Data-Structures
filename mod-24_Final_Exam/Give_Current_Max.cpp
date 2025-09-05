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

class compare
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            return a.roll > b.roll;
        }
        return a.marks < b.marks;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, compare> pq;

    for (int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }

    int q;
    cin >> q;

    while (q--)
    {
        int cmd;
        cin >> cmd;
        Student top = pq.top();

        if (cmd == 0)
        {
            string name;
            int roll;
            int marks;

            cin >> name >> roll >> marks;
            Student st(name, roll, marks);
            pq.push(st);
            if (!pq.empty())
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            else
                cout << "Empty\n";
        }
        else if (cmd == 1)
        {
            if (!pq.empty())
            {
                cout << top.name << " " << top.roll << " " << top.marks << endl;
                pq.pop();
            }
            else
                cout << "Empty\n";
        }
        else if (cmd == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                cout << top.name << " " << top.roll << " " << top.marks << endl;
            }
            else
                cout << "Empty\n";
        }

        else
        {
            cout << "Empty\n";
        }
    }
    return 0;
}
