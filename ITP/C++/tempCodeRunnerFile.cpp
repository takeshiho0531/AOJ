#include <bits/stdc++.h>
using namespace std;

int main(){
    vec<int> vec(3);
    for(int i=0;i<3;i++){
        cin>>vec.at(i);
    }
    sort(vec.begin(), vec.end())
    for(int i=0;i<3;i++){
        cout<<vec.at(i)<<' ';
    }
    cout<<endl;
}
//5.57
//これだと5 2 2みたいに同じものが来た時に破綻して、2 8093808 5というoutputが出てきてしまった
//sortのアルゴリズムとか使うんかな