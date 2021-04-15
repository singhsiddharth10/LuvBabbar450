#include<bits/stdc++.h>
using namespace std;
int countBinarySubstrings(string s) {
        
    int temp[s.length()];
    int k = 0;
    temp[0] = 1;
    for(int i = 1; i < s.length(); i++){
        if(s[i-1] == s[i]){
            temp[k]++;
        }else{
            k++;
            temp[k] = 1;
        }
    }
    int ans = 0;
    for(int i = 0; i < k ; i++){
        ans += min(temp[i],temp[i+1]);
    }
    
    return ans;
}
int main(){
	string s;
	cin>>s;
	cout<<countBinarySubstrings(s);
}
