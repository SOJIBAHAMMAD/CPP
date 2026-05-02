#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student l,Student r) {
    if(l.marks>r.marks) {
        return true;
    } else if(l.marks<r.marks) {
        return false;
    } else {
        if(l.roll<r.roll) {
            return true;
        } else {
            return false;
        }
    }
}
int main () {
    int N;
    cin>>N;
    Student arr[N];
    for(int i=0;i<N;i++) {
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
    }
    sort(arr,arr+N,cmp);
    for(int i=0;i<N;i++) {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
    }
    return 0;
}