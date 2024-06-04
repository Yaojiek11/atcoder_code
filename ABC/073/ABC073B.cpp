#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N;
    int res = 0;
    cin >> N;
    vector<int> l(N);
    vector<int> r(N);
    for(int i = 0; i < N; i++){
        cin >> l[i] >> r[i];
        res = res + (r[i] - l[i] + 1);
    }
    cout << res << endl;
    return 0;
}