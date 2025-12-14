#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int marks;
};

class cmp
{
public:
    bool operator()(Student &a, Student &b)
    {
        if (a.marks == b.marks)
            return a.age > b.age;
        else
            return a.marks < b.marks;
    }
};

int main()
{
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; i++)
    {
        Student s;
        cin >> s.name >> s.age >> s.marks;
        pq.push(s);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int input;
        cin >> input;

        if (input == 0)
        {
            Student s;
            cin >> s.name >> s.age >> s.marks;
            pq.push(s);

            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().age << " " << pq.top().marks << endl;
            else
                cout << "Empty\n";
        }

        else if (input == 1)
        {
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().age << " " << pq.top().marks << endl;
            else
                cout << "Empty\n";
        }

        else
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                    cout << pq.top().name << " " << pq.top().age << " " << pq.top().marks << endl;
                else
                    cout << "Empty\n";
            }
            else
            {
                cout << "Empty\n";
            }
        }
    }

    return 0;
}