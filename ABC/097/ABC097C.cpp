#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
using namespace std;
using ll = long long;
int main(){
    string s;
    int K;
    set<string> st;
    cin >> s;
    cin >> K;
    string str;
    for(int i=0; i < s.size(); i++){
        for(int j=1; j <= K; j++){
            str = s.substr(i, j);
            st.insert(str);
        }
    }

    /*for(auto itr = st.begin(); itr != st.end(); ++itr) {
        std::cout << *itr << endl;      // イテレータの指す先のデータを表示
    }*/

    auto itr = st.begin();

    for(int i=1; i<K; i++){
        itr++;
    }

    cout << *itr << endl;

    //cout << s.size() << endl;
    /*std::string str("012345");
    std::string sub = str.substr(2, 3);     //  [2] の位置から3文字切り出す
    std::cout << sub << "\n";   234*/ 
    return 0;
}