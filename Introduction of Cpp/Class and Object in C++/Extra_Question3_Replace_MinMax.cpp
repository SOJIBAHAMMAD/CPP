#include<bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++) {
        cin>>A[i];
    }
    int min= INT_MAX;
    for(int i=0;i<N;i++) {
        if(min>A[i]) {
            min=A[i];
        }
    }

    int max= INT_MIN;
    for(int i=0;i<N;i++) {
        if(max<A[i]) {
            max=A[i];
        }
    }

    swap(min,max);
    for(int i=0;i<N;i++) {
        if(A[i]==min) {
            cout<<max<<" ";
        } else if(A[i]==max) {
            cout<<min<<" ";
        } else {
            cout<<A[i]<<" ";
        }
    }

    return 0;
}