#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

ll in(){
    ll inX;
    cin>>inX;
    return inX;
}

int main(){
    cout.tie(0)->sync_with_stdio(0);
    ll n = in()-1, m = in();

    bool one_time = true;
    for(ll i = 0; i < n; i++){
        ll wynik = 0;
        while(m>0){
            wynik+=m%10;
            m/=10;
        }
        m = wynik*2;

        if(i>10 && one_time){
            ll p = i-10;
            ll r = n%p;
            if(!r) r = p;
            n = i + r + 3;
            one_time=false;
        }

    }

    cout<<m<<endl;
}
//6 i 12
//18
//2 4 8 16 14 10