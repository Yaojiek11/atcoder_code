#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <stack>
#include <queue>
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    cout << (b-a)*(b-a+1)/2 - b << endl;
    return 0;
}