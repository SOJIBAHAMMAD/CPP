#include<bits/stdc++.h>
using namespace std;
int main () {
    int T;
    cin>>T;
    for(int i=0;i<T;i++) {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++) {
            cin>>A[i];
        }

        int min=INT_MAX;
        for(int i=0;i<N-1;i++) {
            for(int j=i+1;j<N;j++) {
                int x=A[i]+A[j]+j-i;
                if(x<min) {
                    min=x;
                }
            }
        }
        cout<<min<<endl;
    }
    return 0;
}