#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, X;
    cin >> N >> X;
    vector<int> A(N);
    int mi = 1001;
    for(int i=0; i<N; i++){
        cin >> A[i];
        X = X - A[i];
        if(A[i] < mi){
            mi = A[i];
        }
    }
    cout << A.size() + (X/mi) << endl;
    return 0;
}