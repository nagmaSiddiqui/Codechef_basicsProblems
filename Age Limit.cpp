#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
       
       int X,Y,A;
        cin>>X>>Y>>A;
        if(A>=X && A<Y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
               
    }
	
	return 0;
}

