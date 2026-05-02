#include<bits/stdc++.h>
using namespace std;
int main () {
    string s;
    getline(cin,s);
    string x;
    cin>>x;
    int count=0;
    stringstream ss(s);
    string word;
    while(ss>>word) {
        if(x==word) {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}