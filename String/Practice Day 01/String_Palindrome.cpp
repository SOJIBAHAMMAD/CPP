#include<bits/stdc++.h>
using namespace std;
int  main () {
    string S;
    cin>>S;
    bool flag=true;
    for(int i=0;i<S.length()/2;i++) {
        if(S[i]!=S[S.length()-1-i]) {
            flag=false;
            break;
        }
    }
    if(flag) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}