#include<iostream>

using namespace std;

int main(){
    int input;
    int bin[8]={0};

    cin>>input;
    for(int i=7; i>=0; i--){
        bin[i]=input & 0x1;    //store LSB in bin[7]
        input=input >> 1;
        //00101101 -> 00010110
    }

    for(int i=0; i<=7; i++){
        cout<<bin[i];
    }
    cout<<endl;
    return 0;
}