#include<bits/stdc++.h>
using namespace std;
int  main () {
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        string S;
        cin>>S;
        int count1=0;
        for(int i=0;i<S.length()/2;i++) {
            count1+=S[i]-'0';
        }
        int count2=0;
        for(int j=S.length()/2;j<S.length();j++) {
            count2+=S[j]-'0';
        }
        if(count1==count2) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}