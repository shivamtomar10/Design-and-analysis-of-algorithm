#include<iostream>
using namespace std;


int main(){
    cout<<"Enter the number of nodes:";
    int nodes;
    cin>>nodes;
    
    int arr[nodes+1][nodes+1];
    
    for(int i=1;i<nodes+1;i++){
        for(int j=1;j<nodes+1;j++){
            cout<<i<<"->"<<j<<":";
            cin>>arr[i][j];
            if(arr[i][j]==0){
                arr[i][j]=999;
            }
        }
    }
    
    int freeze=1;
    
    while(freeze<=nodes){
        for(int i=1;i<nodes+1;i++){
            for(int j=1;j<nodes+1;j++){
                if(i!=freeze && j!=freeze && i!=j){
                    arr[i][j]=min(arr[i][j],arr[i][freeze]+arr[freeze][j]);
                }
                else if(i==j){
                    arr[i][j]=0;
                }
            }
        }
        freeze++;
    }
    
    for(int i=1;i<nodes+1;i++){
        for(int j=1;j<nodes+1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
