#include <bits/stdc++.h>
using namespace std;

int main(){
    int X[10000];
    for (int i=1;i<10009;i++){
        cin>>X[i];
        if(X[i]==0){
            break;
        }
    }
    int index=1;
    while(X[index]!=0){
        cout<<"Case "<<index<<": "<<X[index]<<endl;
        index++;
    }
}

//5分以上
//while文の書き方注意、whilt(int i=0;i<n;i++)みたいな書き方はしないからね！！
//入力に0が来たらループをbreakで打ち切る！