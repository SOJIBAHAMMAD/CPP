#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmd(Student l,Student r) {
    if((l.math_marks+l.eng_marks)>(r.math_marks+r.eng_marks)) {
        return true;
    } else if((l.math_marks+l.eng_marks)<(r.math_marks+r.eng_marks)) {
        return false;
    } else {
        if(l.id<r.id) {
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
        cin>>arr[i].nm>>arr[i].cls>>arr[i].s>>arr[i].id>>arr[i].math_marks>>arr[i].eng_marks;
    }
    sort(arr,arr+N,cmd);
    for(int i=0;i<N;i++) {
        cout<<arr[i].nm<<" "<<arr[i].cls<<" "<<arr[i].s<<" "<<arr[i].id<<" "<<arr[i].math_marks<<" "<<arr[i].eng_marks<<endl;
    }
    return 0;
}