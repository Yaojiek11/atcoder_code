#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << max(A*B, C*D) << endl;
    return 0;
}