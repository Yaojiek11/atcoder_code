#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N, B;
    cin >> N;
    vector<int> X(N);
    for(int i=0; i<N; i++){
        cin >> X[i];
    }
    sort(X.begin(), X.end());
    for(int i=0; i<N; i++){
        if(i<=(N/2)-1){
            B = X[N/2];
        }else if(i>=N/2){
            B = X[(N/2)-1];
        }
        cout << B << endl;
    }
    return 0;
}
