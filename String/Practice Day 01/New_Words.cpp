#include<bits/stdc++.h>
using namespace std;
int  main () {
    string S;
    cin>>S;
    int freq[26]={0};
    for(int i=0;i<S.length();i++) {
        if(S[i]>='a' && S[i]<='z') {
            freq[S[i]-'a']++;
        } else {
            freq[S[i]-'A']++;
        }
    }
    int count_E=freq['e'-'a'];
    int count_G=freq['g'-'a'];
    int count_Y=freq['y'-'a'];
    int count_P=freq['p'-'a'];
    int count_T=freq['t'-'a'];
    
    int min_val = min({count_E,count_G,count_Y,count_P,count_T});
    cout<<min_val<<endl;
    return 0;
}