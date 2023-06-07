#include<iostream>

using namespace std;

int main(){
    int row, col;
    cin>>row>>col;
    int map[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int input;
            cin>>input;
            map[i][j]=input;
        }
    }
    int t_map[col][row];
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            t_map[i][j]=map[j][i];
        }
    }
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout<<t_map[i][j];
            if(j != row-1) cout<<" ";
        }
        cout<<"\n";
    }
}