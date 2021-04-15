#include<bits/stdc++.h>
using namespace std;

static bool sortcol( const vector<int>& v1, const vector<int>& v2 ) { 
        return v1[0] < v2[0]; 
    }
vector<vector<int> > merge(vector<vector<int> >& vect) {
        if (vect.size() <= 1) return vect;
        sort(vect.begin(), vect.end(),sortcol);
        
        vector<vector<int> > rect;
        rect.push_back(vect[0]);
        
        for(int i = 1; i < vect.size(); i++){
            if(vect[i][0] > rect.back()[1]){
                rect.push_back(vect[i]);
            }else{
                rect.back()[1] = max(rect.back()[1], vect[i][1]);
            }
        }
               
    return rect;
}
int main(){
	int n;
	cin>>n;
	vector<vector <int> > v;
	for(int i=0; i < n; i++){ 
    	vector<int> row;
    	for(int j=0; j < 2; j++){
    		int temp;
      		cin>>temp;
      		row.push_back(temp);
    	}
    v.push_back(row);
	}
	vector<vector <int> > ans = merge(v);
	
	for(int i = 0; i < ans.size(); i++){
		for(int j = 0; j < ans[i].size(); j++)
			cout<<ans[i][j]<<" ";
		cout<<endl;
	}
	
}
