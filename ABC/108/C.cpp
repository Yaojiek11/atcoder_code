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
    ll n, k;
    cin >> n >> k;
    
    if(k % 2 == 1){
        cout << (n / k) * (n / k) * (n / k) << endl;
    }else{
        cout << (n / k) * (n / k) * (n / k) + ((n + k / 2) / k) * ((n + k / 2) / k) * ((n + k / 2) / k) << endl;
    }
    return 0;
}