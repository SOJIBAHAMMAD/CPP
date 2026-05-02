#include<bits/stdc++.h>
using namespace std;
int main () {
    int T;
    cin>>T;
    for(int i=0;i<T;i++) {
        string S,X;
        cin>>S>>X;
        int len=X.length();
        while(1) {
            int index=S.find(X);
            if(index!=-1) {
                S.erase(index,len);
                S.insert(index,"#");
            } else {
                break;
            }
        }
        cout<<S<<endl;
    }
    return 0;
}
