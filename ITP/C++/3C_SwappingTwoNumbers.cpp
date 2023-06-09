#include <bits/stdc++.h>
using namespace std;

int main(){
    int dataset[10009][2];
    for (int i=1;i<=10009;i++){
        cin>>dataset[i][0]>>dataset[i][1];
        if ((dataset[i][0]==0) and (dataset[i][1]==0)){
            break;
        }
    }
    int index=1;

    while ((dataset[index][0]!=0) or (dataset[index][1]!=0)){
        if (dataset[index][0]>=dataset[index][1]){
            cout<<dataset[index][1]<<' '<<dataset[index][0]<<endl;
        }
        if (dataset[index][0]<dataset[index][1]){
            cout<<dataset[index][0]<<' '<<dataset[index][1]<<endl;
        }
        index++;
    }

}
//10分以上...
//自分で格納のindexを1から始めたのを忘れていた

