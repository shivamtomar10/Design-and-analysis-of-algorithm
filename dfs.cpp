#include<iostream>
using namespace std;
#include<stack>


int main(){
    cout<<"Enter the number of nodes:";
    int nodes;
    cin>>nodes;
    
    int arr[nodes][nodes];
    
    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
            cout<<i<<"->"<<j<<":";
            cin>>arr[i][j];
        }
    }
    
    // bfs
    
    stack<int> s;
    cout<<"Enter the starting node:";
    int start_node;
    cin>>start_node;
    
    int arrvisited[nodes]={0};
    arrvisited[start_node]=1;
    
    s.push(start_node);
    
    while(!s.empty()){
        int n=s.size();
        
        for(int i=0;i<n;i++){
            int front=s.top();
            cout<<front<<" ";
            s.pop();
            
            for(int j=0;j<nodes;j++){
                if(arr[front][j]!=0 && arrvisited[j]!=1){
                    s.push(j);
                    arrvisited[j]=1;
                }
            }
        }
    }
    
    // for(int i=1;i<nodes+1;i++){
    //     for(int j=1;j<nodes+1;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}
