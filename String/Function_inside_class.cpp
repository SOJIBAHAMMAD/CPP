#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    double cgpa;
    int math_marks;
    int phy_marks;

    Student(string name,int roll,double cgpa,int math_marks,int phy_marks) {
        this->name=name;
        this->roll=roll;
        this->cgpa=cgpa;
        this->math_marks=math_marks;
        this->phy_marks=phy_marks;
    }
    void fun() {
        cout<<"Total marks of "<<name<<" is = "<<math_marks+phy_marks<<endl;
    }

};
int main () {
    Student s1("Sajib Ahammad",1,3.812,92,95);
    Student s2("Azim Hossen Munna",3,3.80,88,85);
    s1.fun();
    s2.fun();
    return 0;
}