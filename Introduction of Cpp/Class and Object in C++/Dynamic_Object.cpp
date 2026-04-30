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
Student* fun() {
    Student* S2 = new Student(5,1,5.00);
    return S2;
}
int main () {

    Student* S1 = new Student(5,20,3.45);
    Student* obj=fun();
    cout<<S1->cls<<" "<<S1->roll<<" "<<fixed<<setprecision(2)<<S1->gpa<<endl;
    cout<<obj->cls<<" "<<obj->roll<<" "<<fixed<<setprecision(2)<<obj->gpa<<endl;
    return 0;
}