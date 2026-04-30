#include<bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++) {
        cin>>A[i];
    }

    bool flag=true;

    for(int i=0;i<N/2;i++) {
        if(A[i]!=A[N-1-i]) {
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