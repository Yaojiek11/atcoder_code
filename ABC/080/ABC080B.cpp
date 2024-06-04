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
    int N;
    cin >> N;
    int sum = 0;
    int A = N;
    while(A!=0){
        sum =  sum + (A % 10);
        A = A / 10;
    }
    string ans = (N%sum==0)? "Yes" : "No";
    cout << ans << endl;
    return 0;
}