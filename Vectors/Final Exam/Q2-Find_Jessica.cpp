#include<bits/stdc++.h>
using namespace std;
int main () {
    string S;
    getline(cin,S);
    stringstream ss(S);
    string x="Jessica";
    string word;
    bool flag=false;
    while(ss>>word) {
        if(word==x) {
            flag=true;
            break;
        } else {
            flag=false;
        }
    }
    if(flag==true) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}