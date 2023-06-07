#include<iostream>

using namespace std;

int main(){
    int x, y;
    int dist_sq;
    cin>>x>>y;
    
    dist_sq=(x*x)+(y*y);
    if(dist_sq <= 10000){
        cout<<"inside\n";
    }else{
        cout<<"outside\n";
    }
    return 0;
}