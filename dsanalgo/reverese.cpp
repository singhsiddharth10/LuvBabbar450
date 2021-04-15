#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str){
  int n = str.length();
  for(int i = 0; i < n/2; i++){
      char temp = str[i];
      str[i] = str[n-i-1];
      str[n-i-1] = temp;
  }
  return str;
}
int main(){
	string str;
	cin>>str;
	str = reverseWord(str);
	cout<<str;
}


