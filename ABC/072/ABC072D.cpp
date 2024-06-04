#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int N;
    int count = 0;
    cin >> N;
    vector<int> p(N);
    for(int i=0; i<N; i++){
        cin >> p[i];
    }
    for(int i=0; i<N; i++){
        if(p[i] == i+1){
            swap(p[i], p[i+1]);
            count++;
        }
    }
    cout << count << endl;
    return 0;
}