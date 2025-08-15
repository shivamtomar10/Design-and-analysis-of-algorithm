
#include<iostream>
using namespace std;
//insertion sort
// shell sort
int main(){
    int arr[]={5,4,3,2,1};
    
    for(int gap=5/2;gap>=1;gap=gap/2){
       
        for(int j=gap;j<5;j++){
            for(int i=j-gap;i>=0;i=i-gap){
                if(arr[i+gap]>=arr[i]){
                    break;
                }
                swap(arr[i],arr[i+gap]);
            }
        }
    }
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
