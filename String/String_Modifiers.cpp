#include<bits/stdc++.h>
using namespace std;
int main () {
    string s="Hello World ";
    string s1="Program";
    // s+=s1;
    cout<<s<<endl;

    // s.push_back('G');
    // cout<<s<<endl;
    // s.pop_back();
    // cout<<s<<endl;


    s.erase(5,1);
    //cout<<s<<endl;
    s.replace(5,6,"Bangladesh");
    cout<<s<<endl;
    return 0;
}