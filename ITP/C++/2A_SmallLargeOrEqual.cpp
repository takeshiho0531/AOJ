#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if (a<b){
        cout<<"a < b"<<endl;
    }
    if(a==b){
        cout<<"a == b"<<endl;
    }
    if(a>b){
        cout<<"a > b"<<endl;
    }
}
//2.45
//ちゃんと"a == b"とかの隙間を開けないとpresentation errorになる
//なぜかcoutのところをcinと書いていて、手元でcompile errorになっていた