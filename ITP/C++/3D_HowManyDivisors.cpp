#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int count=0;
    for (int i=a;i<=b;i++){
        if(c%i==0){
            count++;
        }

    }
    cout<<count<<endl;
}
//4ふん27
//英語で問題文読んでたせいで文意の把握に時間かかりすぎた
//aからbまでってaもbも含めるんだね