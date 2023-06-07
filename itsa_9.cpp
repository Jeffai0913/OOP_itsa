#include<iostream>

using namespace std;

int main(){
    int max;
    int total=0;
    cin>>max;
    for(int i=1; i<=max; i++){
        if(i%3 == 0) total+=i;
    }
    cout<<total<<endl;
    return 0;
}