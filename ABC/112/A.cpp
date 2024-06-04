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
    int N;
    cin >> N;
    if(N == 1){
        cout << "Hello World" << endl;
    }else{
        int A, B;
        cin >> A >> B;
        cout << A + B << endl;
    }
    return 0;
}