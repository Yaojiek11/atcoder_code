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
    int N;
    cin >> N;
    vector<int> A(N);
    REP(i, N) cin >> A[i];

    int max, min;
    max = *max_element(A.begin(), A.end());
    min = *min_element(A.begin(), A.end());
    cout << max-min << endl;
    return 0;
}