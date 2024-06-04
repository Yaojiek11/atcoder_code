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
    int count = 0;
    string s;
    cin >> s;

    if(s.size() == 1){
        cout << 0 << endl;
        return 0;
    }

    for(int i=1; i<s.size(); i++){
        if(s[i] != s[i-1]) count++;
    }

    cout << count << endl;
    return 0;
}