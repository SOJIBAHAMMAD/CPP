#include<bits/stdc++.h>
using namespace std;
int* sort_it(int N) {
    int* A = new int[N];
    for(int i=0;i<N;i++) {
        cin>>A[i];
    }
    // for(int i=0;i<N-1;i++) {
    //     for(int j=i+1;j<N;j++) {
    //         if(A[i]<A[j]) {
    //             int temp=A[i];
    //             A[i]=A[j];
    //             A[j]=temp;
    //         }
    //     }
    // }
    sort(A,A+N,greater<int>()); // used sort function for Time Complexity.
    return A;
}
int main () {
    int N;
    cin>>N;
    int* return_array = sort_it(N);
    for(int i=0;i<N;i++) {
        cout<<return_array[i]<<" ";
    }
    delete[] return_array;
    return 0;
}