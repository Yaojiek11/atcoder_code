#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N, M, X;
    cin >> N >> M >> X;
    /*vector<int> A(M); // M個のコストマスを生成
    for(int i=0; i<M; i++){
        cin >> A[i];  // コストマスを指定
    }
    vector<int> v(N+1); // 全体のマスを生成
    for(int i=0; i<=N; i++){
        v[i]=i;         // マスに数字を指定
    }
    int zero = 0;
    int n = 0;
    for(int i=X; i>=0; i--){       // 0に行く場合のかかるコスト
        for(int j=0; j<M; j++){
            if(i==A[j]){
                zero = zero + 1;
            }
        }
    }
    for(int i=X; i<=N; i++){       // Nに行く場合のかかるコスト
        for(int j=0; j<M; j++){
            if(i==A[j]){
                n = n + 1; 
            }
        }
    }
    if(zero<=n){
        cout << zero << endl;
    }else{
        cout << n << endl;
    }*/

    // 模範解答
    int L = 0;
    int R = 0;
    for(int i = 0; i < M; i++){
        int a;
        cin >> a;
        if(a<X){
            L++;
        }else{
            R++;
        }
    }
    cout << min(L, R) << endl;

    return 0;
}