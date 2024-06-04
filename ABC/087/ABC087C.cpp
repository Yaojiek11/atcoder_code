#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=0; i<N; i++){
        cin >> B[i];
    }
    int total;
    int max = 0;
    for(int i=1; i<=N; i++){
        total=0;
        for(int a=0; a<=N-i; a++){
            total = total + A[a];
        }
        for(int b=N-i; b<N; b++){
            total = total + B[b];
        }
        if(max < total){
            max = total;
        }
    }
    cout << max << endl;
    return 0;
}