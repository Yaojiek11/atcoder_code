#include <iostream>
using namespace std;
char a[55][55];
int main(){
	int H, W;
	cin >> H >> W;

	for(int i=0; i<H; i++){
		for(int j=0; j<W; j++)
			cin >> a[i][j];
    }
			
	for(int i=0; i<H; i++)
		for(int j=0; j<W ;j++){
			if(a[i][j] == '#'){
				if(i != 0){
                    if(a[i-1][j] == '#') continue;
                }
				if(i != H-1){
                    if(a[i+1][j] == '#') continue;
                }
				if(j != 0){
                    if(a[i][j-1] == '#') continue;
                }
				if(j != W-1){
                    if(a[i][j+1] == '#') continue;
                }
				cout << "No" << endl;
                return 0;
			}
		}
	cout << "Yes" << endl;
	return 0;
}