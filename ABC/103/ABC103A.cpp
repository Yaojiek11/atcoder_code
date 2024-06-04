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
int main(){
    vector<int> A(3);
    REP(i, 3) cin >> A[i];
    sort(A.begin(), A.end());
    cout << (A[1]-A[0]) + (A[2]-A[1]) << endl;
    return 0;
}