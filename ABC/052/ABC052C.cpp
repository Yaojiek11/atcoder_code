#include <iostream>
#include <string>
using namespace std;
int main(){
    int N;
    long long int n = 1;
    long long int k = 0;
    cin >> N;
    for(int i=N; i!=0; i--){
        n *= i;
    }
    //cout << n << endl;
    for(long long int j=1; j<=n; j++){
        if(n % j == 0){
            k++;
        }
    }
    cout << k << endl;
    return 0;
}