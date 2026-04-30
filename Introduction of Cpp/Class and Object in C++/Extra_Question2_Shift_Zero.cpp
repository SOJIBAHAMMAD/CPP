#include<bits/stdc++.h>
using namespace std;
void fun(int A[],int N) {
    for(int i=0;i<N;i++) {
        cin>>A[i];
    }
    for(int i=0;i<N;i++) {
        if(A[i]!=0) {
            cout<<A[i]<<" ";
        }
    }
    for(int i=0;i<N;i++) {
        if(A[i]==0) {
            cout<<A[i]<<" ";
        }
    }
}
int main () {
    int N;
    cin>>N;
    int A[N];
    fun(A,N);
    return 0;
}