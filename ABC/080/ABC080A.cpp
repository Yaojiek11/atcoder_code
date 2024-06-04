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
    int N, A, B;
    cin >> N >> A >> B;
    cout << min(N*A, B) << endl;
    return 0;
}