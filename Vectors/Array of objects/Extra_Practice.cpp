/*
Make a class named Student. Write a program to take a positive integer N 
as input and make an Student array of size N. 
Student 
{
	name;
	roll;
	marks;
}
Your task is to sort the Students data according to the marks in ascending order. 
If multiple students have the same marks then sort them according to the roll in 
descending order as the roll will be unique.
Note: name will not contain any spaces.
*/


#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    int marks;
};
bool cmp(Student l,Student r) {
    if(l.marks<r.marks) {
        return true;
    } else if(l.marks>r.marks) {
        return false;
    } else {
        if(l.roll>r.roll) {
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