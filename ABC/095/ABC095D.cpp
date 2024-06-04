#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N, C;
    cin >> N >> C;
    int c = 0;
    int now = 0;
    vector<int> x(N);
    vector<int> v(N);
    vector<int> res, res1, res2;
    for(int i=0; i<N; i++){
        cin >> x[i] >> v[i];
    }
    for(int i=0; i<N; i++){
        for(int j=1; j<=N; j++){

            if(x[i]==x[j]){
                break;
            }
        }
    }

    cout << c << endl;
    return 0;
}