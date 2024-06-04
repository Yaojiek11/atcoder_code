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
using ll = long long;
int main(){
    int A, B;
    cin >> A >> B;
    cout << max({A+B, A-B, A*B}) << endl;
    return 0;
}