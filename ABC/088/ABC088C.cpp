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
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
typedef long long ll;
int main(){

    vector<vector<int> > c;
    c.resize(3);

    REP(i, 3) c[i].resize(3);

    REP(i, 3)
        REP(j, 3)
            cin >> c[i][j];
    
    int b[] = {c[0][0] - 0, c[0][1] - 0, c[0][2] - 0};
    int a[] = {0, c[1][0] - b[0], c[2][0] - b[0]};

    REP(i, 3)
        REP(j, 3)
            if(c[i][j] != a[i] + b[j]){
                cout << "No" << endl;
                return 0;
            }

    cout << "Yes" << endl;
    return 0;
}