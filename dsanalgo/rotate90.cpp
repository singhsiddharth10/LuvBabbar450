#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>& mat) {
    int n = mat.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
    
    int k = 0;
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n; j++){
            swap(mat[j][k], mat[j][n - k - 1]);
        }
        k++;
    }
    
}
int main(){
	int r,c;
	cin>>r>>c;
	vector<vector<int> > vect(r);
	
	for(int i = 0; i < r; i++){
		vect[i].assign(c,0);	
		for(int j = 0; j < c; j++){
			cin>>vect[i][j];
		}
	}
	
	rotate(vect);
	return 0;
}
