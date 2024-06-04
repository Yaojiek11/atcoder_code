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

int update(int N){
    if(N == 0){
        return 0;
    }else if(N < 4){
        return -1;
    }else{
        return max(update(N-4), update(N-7));
    }
}

int main(){
    int N;
    cin >> N;
    int t;
    t = update(N);
    if(t == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}