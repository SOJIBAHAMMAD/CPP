#include<bits/stdc++.h>
using namespace std;
class Student {
    public :
    int cls;
    int roll;
    double gpa;

    Student(int cls,int roll,double gpa) {
        this->cls=cls;
        this->roll=roll;
        this->gpa=gpa;
    }
};
int main () {
    Student S1(5,20,3.45);
    Student S2(5,1,5.00);
    cout<<S1.cls<<" "<<S1.roll<<" "<<fixed<<setprecision(2)<<S1.gpa<<endl;
    cout<<S2.cls<<" "<<S2.roll<<" "<<fixed<<setprecision(2)<<S2.gpa<<endl;
    return 0;
}