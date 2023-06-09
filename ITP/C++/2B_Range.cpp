#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a<b)and(b<c)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
//2.16
//c++ではa<b<cとかはダメで(a<b)and(b<c)にしないとダメ