#include<bits/stdc++.h>
using namespace std;
int  main () {
    string S;
    cin>>S;
    while(1) {
        int idx=S.find("EGYPT");
        if(idx!=-1) {
            S.erase(idx,5);
            S.insert(idx," ");
        } else {
            break;
        }
    }
    cout<<S<<endl;
    return 0;
}