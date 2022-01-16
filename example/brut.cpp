#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int in(){
    int inX;
    cin>>inX;
    return inX;
}

int main(){
    cout.tie(0)->sync_with_stdio(0);
    int n = in(), m = in();

    for(int i = 0; i < n-1; i++){
        int wynik = 0;
        while(m>0){
            wynik+=m%10;
            m/=10;
        }
        m = wynik*2;
    }
    cout<<m<<endl;
}
