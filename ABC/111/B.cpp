#include <iostream>
#include <limits>
#include <numeric>
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
#define REP(i, n) for(int (i)=0; (i)<(n); (i)++)
#define rep(i, n) for(int (i)=1; (i)<=(n); (i)++)
typedef pair<int, int> P;
typedef long long ll;
int main(){
    int num;
    cin >> num;
    bool check = false;
    while(check){
        if(num % 10 == num/10 % 10 && num % 10 == num/100 && num/10 % 10 == num/100)
            check == true;
        num++;
    }
    cout << num << endl;
    return 0;
}