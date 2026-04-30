#include<bits/stdc++.h>
using namespace std;
class Student {
    public :
    char name[100];
    int roll;
    char section;
    double cgpa;
};
int main () {
    Student s1,s2;
    cin.getline(s1.name,100);
    cin>> s1.roll >> s1.section >> s1.cgpa;
    cin.ignore();
    cin.getline(s2.name,100);
    cin>> s2.roll >> s2.section >> s2.cgpa;

    cout<<s1.name <<" "<< s1.roll<<" " << s1.section<<" " << s1.cgpa <<endl;
    cout<<s2.name <<" "<< s2.roll <<" "<< s2.section <<" "<< s2.cgpa <<endl;

    return 0;
}