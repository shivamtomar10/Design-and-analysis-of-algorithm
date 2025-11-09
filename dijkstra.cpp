#include<iostream>
using namespace std;

// void primAlgorithm(int arr[][],int nodes){
   
//     }
// }

int main(){
    cout<<"Enter the number of nodes:";
    int nodes;
    cin>>nodes;
    
    int arr[nodes][nodes];
    
    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
            cout<<i<<"->"<<j<<":";
            cin>>arr[i][j];
            if(arr[i][j]==0){
                arr[i][j]=999;
            }
        }
    }
    
    int arrvisited[nodes]={0};
    // int mincost=0;
    int count=0;
    
    cout<<"Enter the starting node:";
    int start_node;
    cin>>start_node;
    
    arrvisited[start_node]=1;
    
    int dist[nodes];
    
    for(int i=0;i<nodes;i++){
        dist[i]=arr[start_node][i];
    }
    
    dist[start_node]=0;
    
    while(count<nodes){
        int min=999,v;
        for(int i=0;i<nodes;i++){
            if(dist[i]<min && arrvisited[i]!=1){
                min=dist[i];
                v=i;
            }
        }
        arrvisited[v]=1;
        count++;
        
        for(int i=0;i<nodes;i++){
            if(dist[i]>dist[v]+arr[v][i]){
                dist[i]=dist[v]+arr[v][i];
            }
        }
    }
    for(int i=0;i<nodes;i++){
        cout<<dist[i]<<" ";
    }
    return 0;
}
