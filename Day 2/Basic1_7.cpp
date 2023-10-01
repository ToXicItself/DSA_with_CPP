#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int E=0,O=0;
    while (n!=0)
    {
        int a=n%10;
        if(a%2==0){
            E=E+a;
        }
        else{
            O=O+a;
        }
        n= n/10;
    }
    cout<<E<<" "<< O;
	
}
