#include <iostream>
#include <limits>
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
    string S;
    cin >> S;
    int c1 = 0, c2 = 0;
    for(int i=0; i<S.size(); i++){
        if(i%2 == 0){ //黒比較
            if(S[i] == '1') c1++; 
        }
        else{   //白比較
            if(S[i] == '0') c1++;
        }
    }
    
    for(int i=0; i<S.size(); i++){
        if(i%2 == 0){   //白比較
            if(S[i] == '0') c2++;
        }
        else{   //黒比較
            if(S[i] == '1') c2++;
        }
    }

    cout << min(c1, c2) << endl;

    return 0;
}