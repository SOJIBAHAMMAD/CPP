#include<bits/stdc++.h>
using namespace std;
int main () {
    char S[100001];
    while(cin.getline(S,100001)) {
        char result[100001];
        int index=0;
        for(int i=0;S[i]!='\0';i++) {
            if(S[i]>='a' && S[i]<='z') {
                result[index] = S[i];
                index++;
            }
        }
        sort(result,result+index);
        for(int i=0;i<index;i++) {
            cout<<result[i];
        }
        cout<<endl;
    }   
    return 0;
}