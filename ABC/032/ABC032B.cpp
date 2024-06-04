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
    string s;
    int k;
    cin >> s;
    cin >> k;
    set<string> st;
    for(int i=0; i<=(int)s.size()-k; i++){
        st.insert(s.substr(i,k));
    }
    cout << st.size() << endl;
    return 0;
}