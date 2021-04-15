#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum = 44 * (n % 4);
        int y = n / 4;
        switch(y){
            case 0: sum += 16 break;
            case 1: sum += 32; break;
            case 2: sum += 44; break;
            case 3: sum += 55; break; 
        }
        cout<<sum<<endl;
    }
	
	return 0;
}
