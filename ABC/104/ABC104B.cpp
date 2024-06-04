#include <iostream>
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
#define ll long long
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define rep(i, n) for(int (i)=1; (i)<=(n); (i)++)
typedef pair<int, int> P;
int main(){
    string S;
    cin >> S;
    if(S[0] != 'A'){
        cout << "WA" << endl;
        return 0;
    }
    int C_count = 0;
    int C_index;
    for(int i=2; i<S.size()-1; i++){
        if(S[i] == 'C'){
            C_count++;
            C_index = i;
        }
    }
    if(C_count != 1){
        cout << "WA" << endl;
        return 0;
    }
    for(int i=1; i<S.size(); i++){
        if(i == C_index) continue;
        if(S[i]>=65 && S[i]<=90){
            cout << "WA" << endl;
            return 0;
        }
    }

    cout << "AC" << endl;
    return 0;
}