#include<iostream>

using namespace std;

int func(int input){
    if(input == 0 || input == 1){
        return (input+1);
    }else if(input > 1){
        return (func(input-1)+func(input/2));
    }
    return 0;
}

int main(){
    int input;
    cin>>input;
    int output=func(input);
    cout<<output<<"\n";
}