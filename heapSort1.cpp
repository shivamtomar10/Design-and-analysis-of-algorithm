
#include<iostream>
using namespace std;
//insertion sort
// shell sort
//merge sort
//heap sort
void maxheapify(int arr[],int size,int i){
    int l=2*i;
    int r=2*i+1;
    int larg = i;
    
    // int size=arr.length;
    if(l<size && arr[l]>arr[larg]){
        larg=l;
    }
    if(r<size && arr[r]>arr[larg]){
        larg=r;
    }
    if(larg!=i){
        swap(arr[i],arr[larg]);
        maxheapify(arr,size,larg);
    }
    
    
}
int main(){
    int arr[]={0,3,1,4,2};
    
    for(int i=5/2-1;i>=0;i--){
        maxheapify(arr,5,i);
            
    }
    
    for(int i=4;i>0;i--){
        swap(arr[0],arr[i]);
        maxheapify(arr,i,0);
    }
    
    
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
