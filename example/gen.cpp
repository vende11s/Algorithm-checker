#include<bits/stdc++.h>
using namespace std;

int in(){
    int inX;
    cin>>inX;
    return inX;
}

int main(){
    int seed = in();
    srand(seed);
    cout<<rand()%10000<<endl<<rand()%10000;
}