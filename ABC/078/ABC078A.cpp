#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <bitset>
using namespace std;
using ll = long long;
int main(){
    char X, Y;
    cin >> X >> Y;
    if(X<Y) cout << '<' << endl;
    else if(X>Y) cout << '>' << endl;
    else if(X==Y) cout << '=' << endl;
    return 0;
}