#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int count_even=0,count_odd=0;
        if(n%2==0) {
            for(int i=0;i<n;i++) {
                if(a[i]%2==0) {
                    count_even++;
                } else {
                    count_odd++;
                }
            }
            int mid=n/2;
            cout<<abs(count_odd-mid)<<endl;
        } else {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
