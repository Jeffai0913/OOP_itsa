#include<iostream>

using namespace std;

int main(){
    int year;
    cin>>year;
    int bissextile=0;    //true:1
    if(year%4 == 0) bissextile=1;
    if(year%100 == 0) bissextile=0;
    if(year%400 == 0) bissextile=1;
    if(bissextile == 1){
        cout<<"Bissextile Year\n";
    }else{
        cout<<"Common Year\n";
    }
}