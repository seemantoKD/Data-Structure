#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;

    Student(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
};

class cmp
{
public:
    bool operator()(Student left, Student right)
    {
        if (left.name != right.name)
            return left.name > right.name;
        else
            return left.id < right.id;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name;
        int id;
        cin >> name >> id;
        Student obj(name, id);
        pq.push(obj);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().id << endl;
        pq.pop();
    }

    return 0;
}
