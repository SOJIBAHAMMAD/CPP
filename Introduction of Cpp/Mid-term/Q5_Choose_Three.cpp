#include<bits/stdc++.h>
using namespace std;
int main () {
    int T;
    cin>>T;
    for(int i=0;i<T;i++) {
        int N,S;
        cin>>N>>S;
        int A[N];
        for(int j=0;j<N;j++) {
        cin>>A[j];
        }
        bool flag=false;
        for(int k=0;k<N;k++) {
            for(int l=k+1;l<N;l++) {
                for(int m=l+1;m<N;m++) {
                    if(A[k]+A[l]+A[m]==S) {
                        flag=true;
                        break;
                    }
                }
            }
        }
        if(flag) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}