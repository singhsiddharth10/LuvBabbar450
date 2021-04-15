#include<bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    set<int> s;
    int flag = 0;
    for(int i = 0; i < n; i++)
        s.insert(a1[i]);
        
    for(int i = 0; i < m; i++){
        if(!s.count(a2[i])){
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        return "No";
    return "Yes";
    
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	int m;
	cin>>m;
	int brr[m];
	for(int i = 0; i < m; i++){
		cin>>brr[i];
	}
	cout<<isSubset(arr,brr,n,m);
}
