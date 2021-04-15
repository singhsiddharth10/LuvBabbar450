#include<bits/stdc++.h>
using namespace std;

int kthSmallest(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int temp[n*n];
        int t = 0;
        
        for(int i = 0; i < n; i++){
          for(int j = 0; j < n; j++){
              temp[t++] = mat[i][j];
          }
        }

        sort(temp,temp+t);

        return temp[k-1];
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
	
	kthSmallest(vect);
	return 0;
}
