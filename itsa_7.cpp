#include<iostream>

using namespace std;

int main(){
    int num_op;
    cin>>num_op;

    for(int i=0; i<num_op; i++){
        int a1, b1, a2, b2;    //a1+b1i, a2+b2i
        char operation;
        cin>>operation>>a1>>b1>>a2>>b2;
        if(operation == '+'){
            cout<<(a1+a2)<<" "<<(b1+b2)<<"\n";
        }else if(operation == '-'){
            cout<<(a1-a2)<<" "<<(b1-b2)<<"\n";
        }else{
            int a3, b3;
            a3=a1*a2-b1*b2;
            b3=a1*b2+a2*b1;
            cout<<a3<<" "<<b3<<"\n";
        }
    }
    return 0;
}