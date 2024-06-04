#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <cmath>
#include <set>
#include <map>
#include <stack>
#include <queue>
using namespace std;
using ll = long long;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(abs(a-c) <= d){
        cout << "Yes" << endl;
    }else{
        if(abs(a-b)<=d && abs(b-c) <= d){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}