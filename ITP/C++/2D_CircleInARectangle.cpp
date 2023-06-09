#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,W,H,r;
    cin>>W>>H>>x>>y>>r;
    if(((x-r)>=0)and((x+r)<=W)and((y-r)>=0)and((y+r)<=H)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
//5ふん
//andとかorとかいっぱい繋いでもおkなんだね