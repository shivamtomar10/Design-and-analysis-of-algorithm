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
    int mincost=0;
    
    cout<<"Enter the starting node:";
    int start_node;
    cin>>start_node;
    
    arrvisited[start_node]=1;
    
    for(int e=0;e<nodes-1;e++){
        int min=999,u=-1,v=-1;
        
        for(int i=0;i<nodes;i++){
            if(arrvisited[i]==1){
                for(int j=0;j<nodes;j++){
                    if(arrvisited[j]!=1 && arr[i][j]<min){
                        min=arr[i][j];
                        u=i;
                        v=j;
                    }
                }
                
            }
        }
        if(u!=-1 && v!=-1){
            cout<<"Edge Selected : " << u << " -> "<< v<<" : "<<min<<endl;
            mincost+=min;
            arr[u][v]=arr[v][u]=999;
            arrvisited[v]=1;
        }
    }
    
    return 0;
}
