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
Student fun() {
    Student S1(5,20,3.45);
    return S1;
}
int main () {
    Student obj=fun();
    cout<<obj.cls<<" "<<obj.roll<<" "<<fixed<<setprecision(2)<<obj.gpa<<endl;
    return 0;
}