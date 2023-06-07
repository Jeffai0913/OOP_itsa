#include<iostream>

using namespace std;

int main(){
    float input[10];
    for(int i=0; i<10; i++){
        cin>>input[i];
    }
    //max
    float max=input[0];
    for(int i=0; i<10; i++){
        if(input[i] > max) max=input[i];
    }
    //min
    float min=input[0];
    for(int i=0; i<10; i++){
        if(input[i] < min) min=input[i];
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"maximum:"<<max<<"\n";
    cout<<"minimum:"<<min<<"\n";
}