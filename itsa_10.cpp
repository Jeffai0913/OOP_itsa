#include<iostream>

using namespace std;

int main(){
    int a, b, temp;
    cin>>a>>b;
    if (a>b){
        while (a%b != 0){
            temp=a%b;
            a=b;
            b=temp;
        }
        cout<<b<<"\n";
    }else{
        while (b%a != 0){
            temp=b%a;
            b=a;
            a=temp;
        }
        cout<<a<<"\n";
    }
    return 0;
}