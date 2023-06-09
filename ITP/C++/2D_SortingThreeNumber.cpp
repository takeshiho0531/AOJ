#include <bits/stdc++.h>
using namespace std;

int main(){
    int list[3];
    cin>>list[0]>>list[1]>>list[2];
    int little=list[0];
    int large=list[1];
    for (int i;i<3;i++){
        if (list[i]<little){
            little=list[i];
        }
        else if (list[i]>large){
            large=list[i];
        }
    }
    int middle;
    for (int i;i<3;i++){
        if ((list[i]!=large)and(list[i]!=little)){
            middle=list[i];
        }
    }
    cout<<little<<' '<<middle<<' '<<large<<endl;
}
//5.57
//これだと5 2 2みたいに同じものが来た時に破綻して、2 8093808 5というoutputが出てきてしまった
//sortのアルゴリズムとか使うんかな