#include <iostream>
using namespace std;
int getsum(int n){
    int sum = 0;
    while(n > 0){
        sum = sum + (n%10);
        n = n / 10;
    }
    return sum;
}

int main(){
    int N, A, B;
    int res = 0;
    cin >> N >> A >> B;
    for(int i = 1; i <= N; i++){
        int sum = getsum(i);
        if(sum >= A && sum <= B){
            res = res + i;
        }
    }
    cout << res << endl;
    return 0;
}