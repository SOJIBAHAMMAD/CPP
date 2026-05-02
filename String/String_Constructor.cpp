#include<bits/stdc++.h>
using namespace std;
int main () {
    // way 1
    string s("Hello World");
    cout<<s<<endl;

    // way 2
    // Do string resize from start.
    string t("Hello World",4);
    cout<<t<<endl;

    // way 3
    // Do string resize from end.
    string y="Hello World";
    string z(y,4);
    cout<<z<<endl;

    // way 4
    string n(5,'A');
    cout<<n<<endl;
    return 0;
}