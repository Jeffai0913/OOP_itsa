#include<iostream>

using namespace std;

int main(){
    int a;
    int prime=1;
    cin>>a;
    for(int i=2; (i*i)<=a; i++){
        if ((a%i)==0){
            prime=0;
            break;
        }
    }
    if(prime == 1){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

    return 0;
}