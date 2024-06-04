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
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b+c || b == a+c || c == a+b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}