#include<bits/stdc++.h>
using namespace std;
class Footballer {
    public:
    string country;
    int jersey;

    Footballer(string country,int jersey) {
        this->country=country;
        this->jersey=jersey;
    }

};
int main () {
    Footballer* Neymar =new Footballer("Brazil",10);
    Footballer* Messi =new Footballer("Argentina",11);

    *Neymar= *Messi;
    delete Messi;
    cout<<Neymar->country<<" "<<Neymar->jersey<<endl;

    return 0;
}
