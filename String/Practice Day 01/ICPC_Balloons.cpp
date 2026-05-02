#include<bits/stdc++.h>
using namespace std;
int  main () {
    int t;
    cin>>t;
    for(int i=0;i<t;i++) {
        int n;
        cin>>n;
        char s[n];
        for(int i=0;i<n;i++) {
            cin>>s[i];
        }
        int count=0;
        int arr[26]={0};
        for(int i=0;i<n;i++) {
            int idx=s[i]-'A';
            if((arr[idx]==0)) {
                count+=2;
                arr[idx]=1;
            } else {
                count+=1;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}
