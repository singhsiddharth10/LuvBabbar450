#include<bits/stdc++.h>
using namespace std;
 bool rotateString(string A, string B) {
         if(A == "" && B == "")
            return true;
        if(A == "" && B != "" || A != "" && B == "")
            return false;
        int j = 0;
        int n = A.length();
        while(j != n - 1){
            char t = A[0];
            for(int i = 1; i < n ; i++){
                A[i-1] = A[i];
            }
            
            A[n-1] = t;
            if(A == B){
                return true;
            }
            j++;
        }
        return false;
    }
    int main(){
    	string a = "abcd";
    	string b = "bcda";
    	cout<<rotateString(a,b);
    	
	}
