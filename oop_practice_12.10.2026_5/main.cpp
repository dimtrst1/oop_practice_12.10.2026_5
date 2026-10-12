#include <iostream>
#include <map>
#include <string>
using namespace std;

typedef pair<int, string> mypair;

class Student
{
    int medmark;
public:
    map<int, string> guys;
    
    void AddStudent(int s1, string s2, int m)
    {
        guys.insert(mypair(s1, s2));
        medmark = m;
    }
    
    void FindStudent(int s1)
    {
        auto ptr = guys.find(s1);
        if (ptr != guys.end())
        {
            cout << ptr->first << " - " << ptr->second << endl;
        }
    }
    
    void Output()
    {
        for (auto ptr = guys.begin(); ptr != guys.end(); ptr++)
        {
            cout << ptr->first << " - " << ptr-> second << endl << "Medium mark is: " << medmark << endl;;
        }
    }
    
    int GetMark()
    {
        return medmark;
    }
};



int main()
{
    Student guys;
    
    guys.AddStudent(23, "Sanya", 12);
    guys.AddStudent(21, "Peter", 11);
    
    guys.Output();
    
    guys.FindStudent(23);
    
    cout << endl;
    guys.Output();
}
