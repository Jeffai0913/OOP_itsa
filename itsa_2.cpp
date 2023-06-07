#include<iostream>

using namespace std;

int main(){
    int mile;
    double km;
    
    cin>>mile;
    km=mile*1.6;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout<<km<<endl;

    return 0;
}