#include<bits/stdc++.h>
using namespace std;
class Student {
    public :
    int ID;
    string Name;
    char Section;
    int Total_Marks;
};

int main () {
    int T;
    cin>>T;
    for(int i=0;i<T;i++) {
        Student s1,s2,s3;
        cin>>s1.ID>>s1.Name>>s1.Section>>s1.Total_Marks;
        cin>>s2.ID>>s2.Name>>s2.Section>>s2.Total_Marks;
        cin>>s3.ID>>s3.Name>>s3.Section>>s3.Total_Marks;
        Student MaxMarks=s1;
        if(s2.Total_Marks>MaxMarks.Total_Marks || (s2.Total_Marks==MaxMarks.Total_Marks && s2.ID<MaxMarks.ID)) {
            MaxMarks=s2;
        }
        if(s3.Total_Marks>MaxMarks.Total_Marks || (s3.Total_Marks==MaxMarks.Total_Marks && s3.ID<MaxMarks.ID)) {
            MaxMarks=s3;
        }

        cout<<MaxMarks.ID<<" "<<MaxMarks.Name<<" "<<MaxMarks.Section<<" "<<MaxMarks.Total_Marks<<endl;
    }
    return 0;
}