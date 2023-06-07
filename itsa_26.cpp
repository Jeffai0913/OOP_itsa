#include<iostream>

using namespace std;

int get_value(int input_value){
    int val=0;
    while(input_value>0){
        val+=input_value%10;
        input_value/=10;
    }
    return val;
}

int main(){
    int n;
    cin>>n;
    int input_val[n];
    for(int i=0; i<n;i++){
        cin>>input_val[i];
    }
    int add_val[n];
    for(int i=0; i<n; i++){
        add_val[i]=get_value(input_val[i]);
    }
    for(int i=0; i<n-1; i++){    //bubble sort
        for(int j=0; j<n-i-1; j++){
            if(add_val[j] > add_val[j+1]){
                int temp=input_val[j];
                input_val[j]=input_val[j+1];
                input_val[j+1]=temp;
                int temp_a=add_val[j];
                add_val[j]=add_val[j+1];
                add_val[j+1]=temp_a;
            }else if(add_val[j] == add_val[j+1] && input_val[j] > input_val[j+1]){
                int temp=input_val[j];
                input_val[j]=input_val[j+1];
                input_val[j+1]=temp;
                int temp_a=add_val[j];
                add_val[j]=add_val[j+1];
                add_val[j+1]=temp_a;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<input_val[i];
        if(i != n-1) cout<<" ";
    }
    cout<<"\n";
}