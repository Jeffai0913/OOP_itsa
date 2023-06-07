#include<iostream>

using namespace std;

double stand_cal(int h, int g){
    double val;
    if(g == 1){
        val=(h-80)*0.7;
    }else{
        val=(h-70)*0.6;
    }
    return val;
}

int main(){
    int height, gender;

    while(1){
        cin>>height>>gender;
        double stand_val;
        stand_val=stand_cal(height, gender);
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(1);
        cout<<stand_val<<"\n";
        if(cin.eof() == true) break;
    }
}