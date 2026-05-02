#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    int marks;
};
int main () {
    int N;
    cin>>N;
    Student arr[N];
    for(int i=0;i<N;i++) {
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
    }
    int i=0;
    int j=N-1;
    while(i<j) {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<N;i++) {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
    }
    return 0;
}