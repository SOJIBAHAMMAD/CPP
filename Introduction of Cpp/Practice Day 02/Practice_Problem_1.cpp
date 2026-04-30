#include<bits/stdc++.h>
using namespace std;
class Student {
    public :
    string name;
    int roll;
    char section;
    double math_marks;
    int cls;

    Student(string name,int roll,char section,double math_marks,int cls) {
        this->name=name;
        this->roll=roll;
        this->section=section;
        this->math_marks=math_marks;
        this->cls=cls;
    }
};
int main () {
    Student Sajib("Sajib",2,'A',94.50,12);
    Student Jahid("jahid",3,'A',92.50,12);
    Student Azim("Azim",4,'A',90.50,12);
    // cout<<Sajib.name<<" "<<Sajib.roll<<" "<<Sajib.section<<" "<<Sajib.math_marks<<" "<<Sajib.cls<<endl;
    // cout<<Jahid.name<<" "<<Jahid.roll<<" "<<Jahid.section<<" "<<Jahid.math_marks<<" "<<Jahid.cls<<endl;
    // cout<<Azim.name<<" "<<Azim.roll<<" "<<Azim.section<<" "<<Azim.math_marks<<" "<<Azim.cls<<endl;

    Student maxStusent = Sajib;
    if(Jahid.math_marks>maxStusent.math_marks) {
        maxStusent=Jahid;
    }
    if(Azim.math_marks>maxStusent.math_marks) {
        maxStusent=Azim;
    }

    cout<<"Highest mark in math student name is "<<maxStusent.name<<endl;

    // double max_marks=max({Sajib.math_marks,Jahid.math_marks,Azim.math_marks});
    cout<<"Highest mark is "<<maxStusent.math_marks<<endl;
    return 0;
}
