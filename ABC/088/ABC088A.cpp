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
    int N, A;
    cin >> N;
    cin >> A;
    if(N%500 <= A){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}