#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;
    int a[3];
    for(int i=0; i<3; i++){
        cin >> a[i];
        s.insert(a[i]);
    }
    cout << s.size() << endl;
    return 0;
}