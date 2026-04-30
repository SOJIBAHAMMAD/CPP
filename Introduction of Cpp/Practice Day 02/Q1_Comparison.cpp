#include<bits/stdc++.h>
using namespace std;
int main () {
    int A,B;
    char S;
    cin>>A>>S>>B;
    if(((A>B) && S=='>') || ((A<B) && S=='<') || ((A==B) && S=='=')) {
        cout<<"Right"<<endl;
    }
     else {
        cout<<"Wrong"<<endl;
    } 
    return 0;
}