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
    ll n = in(), m = in();

    int buff = 0;
    bool one_time = true;
    for(ll i = 0; i < n-1; i++){
        ll wynik = 0;
        while(m>0){
            wynik+=m%10;
            m/=10;
        }
        m = wynik*2;

        if(buff==m && one_time){
            ll p = i-10; //dlugosc ciagu ktory sie powtarza
            ll r = (n-1)%p; //reszta z dzielenia calego ciagu i tego co sie powtarza
            if(!r) r = p; 
            n = i + r + 3;
            one_time=false;
        }
        if(i==10)buff=m;
 }

    cout<<m<<endl;
}
