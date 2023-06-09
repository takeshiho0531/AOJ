#include <bits/stdc++.h>
using namespace std;

int main(){
    int S;
    cin>>S;
    int hour, minute, second;
    hour=S/3600;
    minute=(S-3600*hour)/60;
    second=(S-3600*hour-60*minute);
    cout<<hour<<':'<<minute<<':'<<second<<endl;

}