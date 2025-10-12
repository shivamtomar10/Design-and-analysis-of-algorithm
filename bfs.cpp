#include<iostream>
#include<queue>
using namespace std;


int main(){
    cout<<"This program is used for bfs and dfs traversal:"<<endl;
    cout<<"Enter the number of nodes:";
    int nodes;
    cin>>nodes;
    
    
    int arr[nodes+1][nodes+1];
    
    for(int i=1;i<nodes+1;i++){
        for(int j=1;j<nodes+1;j++){
            cout<<i<<"->"<<j<<":";
            cin>>arr[i][j];
        }
    }
    queue<int> q;
    q.push(1);
    
    int arrvisited[nodes+1]={0};
    arrvisited[1]=1;
    // vector<int> vec;
    
    while(!q.empty()){
        for(int i=0;i<q.size();i++){
            int curr=q.front();
            cout<<curr<<" ";
            q.pop();
            
            for(int p=1;p<nodes+1;p++){
                if(arr[curr][p]!=0 && arrvisited[p]!=1){
                    q.push(p);
                    arrvisited[p]=1;
                }
            }
        }
    }
    
    return 0;
}
