#include<bits/stdc++.h>
using namespace std;
int main () {
    int A,B,C;
    char S,Q;
    cin>>A>>S>>B>>Q>>C; 
    int x;
    if(S=='+') {
        x=A+B;
    } else if(S=='-') {
        x=A-B;
    } else if (S=='*') {
        x=A*B;
    }

    if(x==C) {
        cout<<"Yes"<<endl;
    } else {
        cout<<x<<endl;
    }
    return 0;
}