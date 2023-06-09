#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec(3);

    for (int i=0;i<3;i++){
        cin>>vec.at(i);
    }
    sort(vec.begin(), vec.end());

    for (int i=0;i<2;i++){
        cout<<vec.at(i)<<' ';
    }
    cout<<vec.at(2)<<endl;
}
// sortのアルゴリズムにした。
//最後3つ目だけ出力でループ外してるのは、そうしないとpresentation errorになるから。
//vecの後の3を指定しないと'terminate called after throwing an instance of 'std::out_of_range'
//what():  vector::_M_range_check: __n (which is 0) >= this->size() (which is 0)'' って出るんだが。
//sortはvec型でやるらしい。あと初めと最後指定する。https://algo-method.com/descriptions/139#library


//5.57
//これだと5 2 2みたいに同じものが来た時に破綻して、2 8093808 5というoutputが出てきてしまった
//sortのアルゴリズムとか使うんかな