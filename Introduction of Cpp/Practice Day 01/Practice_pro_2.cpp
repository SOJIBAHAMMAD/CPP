/*
Question: Take an integer array A of size N as input. Then take an integer M as input.
You need to take an array B of size M and copy all elements of array A to array B. 
Delete the array A and then take input of the rest of the elements of array B. After that print array B.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin>>N;
    int* A= new int[N];
    for(int i=0;i<N;i++) {
        cin>>A[i];
    }
    int M;
    cin>>M;
    int* B= new int[M];
    for(int i=0;i<M;i++) {
        B[i]=A[i];
    }
    for(int i=N;i<M;i++) {
        cin>>B[i];
    }
    delete[] A;
    for(int i=0;i<M;i++) {
        cout<<B[i]<<" ";
    }
    return 0;
}