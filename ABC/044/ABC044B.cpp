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
    string w;
    map<char, int> mp; 
    cin >> w;
    for(int i=0; i<w.size(); i++){
        mp[w[i]]++;
    }
    for(int i=0; i<w.size(); i++){
        if(mp[w[i]] % 2 != 0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}