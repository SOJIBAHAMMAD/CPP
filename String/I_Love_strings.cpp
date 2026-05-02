// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

#include<bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin>>N;
    for(int i=0;i<N;i++) {
        string S,T;
        cin>>S>>T;
        int lenOfS =S.length();
        int lenOfT =T.length();
        int minLen=min(lenOfS,lenOfT);
        string result="";
        for(int j=0;j<minLen;j++) {
            result+=S[j];
            result+=T[j];
        }
        if(lenOfS>lenOfT) {
            for(int j=minLen;j<lenOfS;j++) {
                result+=S[j];
            }
        } else {
            for(int j=minLen;j<lenOfT;j++) {
                result+=T[j];
            }
        }
        cout<<result<<endl;
        
    }
    return 0;
}