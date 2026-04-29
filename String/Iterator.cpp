#include<bits/stdc++.h>
using namespace std;
int main () {
    string s="Sajib Ahammad";

    // Iterator way 1
    for(int i=0;i<s.size();i++) {
        cout<<s[i];
    }

    cout<<endl;
    cout<<*s.begin()<<endl;
    cout<<*(s.end()-1)<<endl;

    // Iterator way 2

    for(auto it=s.begin();it<s.end();it++) {
        cout<<*(it);
    }

    // Iterator way 3

    cout<<endl;
    for(auto it : s) {
        cout<<it;
    }
    return 0;
}