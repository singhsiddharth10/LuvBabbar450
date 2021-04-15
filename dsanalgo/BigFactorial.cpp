#include<bits/stdc++.h>
using namespace std;
void multiply(vector<int> &res, int n){
        int carry = 0;
        vector<int> :: iterator itr;
        for(itr = res.begin(); itr != res.end(); itr++){
            int prod = (*itr) * n + carry;
            *itr = prod % 10;
            carry = prod / 10;
        }
        while(carry){
            res.push_back(carry % 10);
            carry/=10;
        }
        
    }
    vector<int> factorial(int N){
        vector <int> res;
        res.push_back(1);
        
        for(int i = 2; i <= N; i++){
            multiply(res,i);
        }
        reverse(res.begin(),res.end());
        return res;
    }
int main(){
	int n;
	cin>>n;
	vector<int> res;
	
	res = factorial(n);
	for(int i = 0; i < res.size(); i++){
		cout<<res[i];
	}
}
