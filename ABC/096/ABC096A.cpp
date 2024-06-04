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
    int a, b;
    cin >> a >> b;
    if(b-a < 0){
        cout << a-1 << endl;
    }else{
        cout << a << endl;
    }
    return 0;
}