#include <iostream>
using namespace std;
int main(){
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int res=0;
    
    for(int a=0; a<=A; a++){
        for(int b=0; b<=B; b++){
            for(int c=0; c<=C; c++){
                int total = a*500 + b*100 + c*50;
                if(X == total){
                    res++;
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}