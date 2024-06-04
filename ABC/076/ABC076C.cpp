#include <iostream>
#include <numeric>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <utility>
using namespace std;
#define INF 100000000
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define rep(i, n) for(int (i)=1; (i)<=(n); (i)++)
typedef pair<int, int> P;
typedef long long ll;
int main(){
    string Sp, T;
    cin >> Sp >> T;
    int nS = (int)Sp.size();
    int nT = (int)T.size();

    for(int St = nS-nT; St >= 0; --St){ //開始位置を変更
        bool OK = true;
        for(int t=0; t < nT; ++t){
            if(Sp[St + t] != '?' && Sp[St + t] != T[t]){
                OK = false;
                break;
            }
        }
        if(OK){ //文字列が適合していたら
            string S = Sp;
            for(int t=0; t<nT; ++t){ //置換
                S[St+t] = T[t];
            }
            for(int s = 0; s < nS; ++s){
                if(S[s] == '?') S[s] = 'a'; //文字列Sの?の部分をすべてaに置換
            }
            cout << S << endl;
            return 0;
        }
    }
    cout << "UNRESTORABLE" << endl;
    return 0;
}