
#include<iostream>
using namespace std;
//insertion sort
// shell sort
//merge sort
void mergeSort(int arr[],int lb,int mid,int ub){
    int i=lb;
    int j=mid+1;
    
    
    // int b[5];
    if(arr[mid]<=arr[j]){
        return;
    }
    // int temp;
    while(i<=mid && j<=ub){
        if(arr[i]<=arr[j]){
            i++;
        }else{
            int temp = arr[j];
            int point=j;
            while(point!=i){
                arr[point]=arr[point-1];
                point--;
            }
            arr[i]=temp;
            
            i++;
            j++;
            mid++;
        }    
    }
        
        
    
    
}
void merge(int arr[],int lb,int ub){
    if(lb<ub){
        int mid =lb + (ub-lb)/2;
        
        merge(arr,lb,mid);
        merge(arr,mid+1,ub);
        mergeSort(arr,lb,mid,ub);
    }
}
int main(){
    int arr[]={0,3,1,4,2};
    
    merge(arr,0,4);
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
