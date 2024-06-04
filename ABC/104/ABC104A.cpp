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
    int R;
    cin >> R;
    if(R<1200)
        cout << "ABC" << endl;
    else if(1200<=R && R<2800)
        cout << "ARC" << endl;
    else cout << "AGC" << endl;
    return 0;
}