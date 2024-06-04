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
    int N;
    cin >> N;
    vector<string> W(N);
    REP(i, N) cin >> W[i];

    //同じ単語がないか探索
    for(int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            if(W[i] == W[j]){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    /*string A = W[0];
    string B = W[1];
    cout << A << " " << B << endl;
    cout << A[0] << endl;
    cout << B[B.size()-1] << endl;*/

    //しりとりになっているか探索
    for(int i=0; i<N-1; i++){
        if(W[i][W[i].size()-1] != W[i+1][0]){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}