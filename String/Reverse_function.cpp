#include<bits/stdc++.h>
using namespace std;
int main () {
    int a[5]={1,2,3,4,5};
    string s="Sajib Ahammad";
    reverse(a,a+5);
    for(int i=0;i<5;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}