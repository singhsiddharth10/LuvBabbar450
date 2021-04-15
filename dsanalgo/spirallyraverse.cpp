#include<bits/stdc++.h>
using namespace std;
vector<int> spirallyTraverse(vector<vector<int> > mat, int r, int c) {
        
    int i,j,k;
    vector<int> ans;
    for(i = 0; i < mat.size(); i++){
        if(ans.size() == (r*c)){
            break;
        }
        for(j = i; j < mat[i].size() - i; j++){
            ans.push_back(mat[i][j]);
        }
        j--;
        
        if(ans.size() == (r*c)){
            break;
        }
        for(k = i+1; k < mat.size() - i; k++){
             ans.push_back(mat[k][j]);
        }
       
        if(ans.size() == (r*c)){
            break;
        }  
        j--;
        k--;
        while(j >= i){
             ans.push_back(mat[k][j]);
            j--;
        }
        j++;
        k--;
         if(ans.size() == (r*c)){
            break;
        }
        while(k > i){
             ans.push_back(mat[k][j]);
            k--;
        }
    }
    for(int i = 0; i < ans.size(); i++)
		cout<<ans[i]<<" ";
    return ans;
        
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
	
	spirallyTraverse(vect,r,c);
	return 0;
}
